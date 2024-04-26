#include <stdlib.h>
#include <stdio.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <net/if.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <unistd.h>
#include <string.h>
#include <pthread.h>
#include <memory.h>
#include <stdio.h>
#include "src/RRCConnectionSetup.h"
#include "src/RRCConnectionRequest.h"

void RRCConnectionSetup(uint8_t** buffer, ssize_t* len)
{

    RRCConnectionSetup_t * setupRRC = (RRCConnectionSetup_t*)calloc(1, sizeof(RRCConnectionSetup_t));
    setupRRC->rrc_TransactionIdentifier = 777;
    setupRRC->criticalExtensions.present = RRCConnectionSetup__criticalExtensions_PR_c1;
    setupRRC->criticalExtensions.choice.c1.present = RRCConnectionSetup__criticalExtensions__c1_PR_rrcConnectionSetup_r8;

    asn_encode_to_new_buffer_result_t res = {NULL, {0, NULL, NULL}};
    res = asn_encode_to_new_buffer(NULL, ATS_CANONICAL_XER, &asn_DEF_RRCConnectionSetup, setupRRC);
    free(res.buffer);
    memset(&res, 0, sizeof(res));
    res = asn_encode_to_new_buffer(NULL, ATS_CANONICAL_XER, &asn_DEF_RRCConnectionSetup, setupRRC);

    *buffer = res.buffer;
    *len = res.result.encoded;

    if (*buffer == NULL) {
        fprintf(stderr, "Error enconing rrc buffer\n");
        exit(1);
    } else {
        fprintf(stderr, "Encoded buffer\n");
    }

    printf("len = %ld\n", *len);

    xer_fprint(stdout, &asn_DEF_RRCConnectionSetup, setupRRC);

}

void EncodeRRCConnectionRequest(uint8_t** buffer, ssize_t* size)
{
    RRCConnectionRequest_t* rrcRequest = NULL;
    asn_dec_rval_t decodeRRCRequest = asn_decode(NULL, ATS_CANONICAL_XER, &asn_DEF_RRCConnectionRequest, (void**)&rrcRequest, buffer, size);

    if (decodeRRCRequest.code != RC_OK) {
        fprintf(stderr, "RRCRequest dont decode!\n");
        exit(1);
    }
    printf("Success! RRCConnectionRequest receive!\n");
}
// отдельный поток для обработки подключений
void *handle_client(int client_socket) {
    //int client_socket = *(int *)arg;
    char buffer[1024] = {0};

    // Чтение данных от клиента
    int bytes_read = recv(client_socket, buffer, 1024,0);
    printf("Client sent bytes = : %d\n", bytes_read);

    if (bytes_read < 0) {
        perror("read failed\n");
    }

    EncodeRRCConnectionRequest(&buffer,sizeof(buffer));

    uint8_t * bufferSetup;
    ssize_t  size;

    RRCConnectionSetup(&bufferSetup,&size);

    if(bufferSetup == NULL)
    {
        printf("Buffer == NULL\n");
    }

    if(size < 0)
    {
        printf("Size buffer == %d\n", size);
    }

    int sendSetup = send(client_socket,bufferSetup,size,0);
    if(sendSetup < 0)
    {
        printf("Server dont send RRCConnectionSetup\n", size);
    }

    printf("Send RCCConnectionSetup in port = %d\n",client_socket);

    // Закрываем соединение
    close(client_socket);
    //free(arg);
    pthread_exit(NULL);
}

int main() {
    int server_fd, client_socket;
    struct sockaddr_in address;
    int addrlen = sizeof(address);
    pthread_t thread_id;

    // Создание сокета
    if ((server_fd = socket(AF_INET, SOCK_STREAM, 0)) == 0) {
        perror("socket failed\n");
        exit(EXIT_FAILURE);
    }

    // Настройка адреса
    address.sin_family = AF_INET;
    address.sin_addr.s_addr = INADDR_ANY;
    address.sin_port = htons(8888);

    // Привязка к адресу и порту
    if (bind(server_fd, (struct sockaddr *)&address, sizeof(address)) < 0) {
        perror("bind failed\n");
        exit(EXIT_FAILURE);
    }

    // Прослушивание подключений
    if (listen(server_fd, 10) < 0) {
        perror("listen failed\n");
        exit(EXIT_FAILURE);
    }

    printf("Server listening on port %d\n", 8888);

    while (1) {
        // Принятие подключения от клиента
        if ((client_socket = accept(server_fd, (struct sockaddr *)&address, (socklen_t*)&addrlen)) < 0) {
            perror("accept failed\n");
            continue;
        }

        // Создание нового потока для обработки клиента
        if (pthread_create(&thread_id, NULL, handle_client, client_socket) < 0) {
            perror("thread creation failed\n");
            close(client_socket);
        } else {
            // Отделяем поток, чтобы он автоматически завершался при выходе
            pthread_detach(thread_id);
        }

    }


    close(server_fd);

    return 0;
}