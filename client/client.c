#include <stdlib.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <net/if.h>
#include <netinet/in.h>
#include <stdio.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <unistd.h>
#include <string.h>
#include "src/RRCConnectionRequest.h"
#include "src/RRCConnectionSetup.h"
//gcc -g -Isrc -I. -o build/rcc main.c src/*.c -DPDU=RRCConnectionRequest -DASN_DISABLE_OER_SUPPORT
// asn1c -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example  -fno-include-deps EUTRA-RRC-Definitions.asn


ssize_t ReadRCCConnectionSetup(int sock,uint8_t** buffer, ssize_t* size)
{
    ssize_t result = recv(sock, buffer, size, 0);

    if (result < 0) {
        perror("Error can't receive message");
        exit(1);
    }

    return result;
}

void ReceiveRRCConnectionSetup(int sock) {
    uint8_t buffer[1024];
    ssize_t size = ReadRCCConnectionSetup(sock, buffer, 1024);
    RRCConnectionSetup_t* rrcSetup = NULL;
    asn_dec_rval_t decodeRRCSetup = asn_decode(NULL, ATS_CANONICAL_XER, &asn_DEF_RRCConnectionSetup, (void**)&rrcSetup, buffer, size);

    if (decodeRRCSetup.code != RC_OK) {
        printf("Error dont decode RRCConnectionSetup");
        close(sock);
        exit(1);
    }
    printf("Success! RRC Connection Setup\n");
}

void RRCConnectionRequest_coder(uint8_t** buffer, ssize_t * len)
{
    //RRCConnectionRequest_t rrcRequest;
    RRCConnectionRequest_t* rrcRequest = (RRCConnectionRequest_t*)calloc(1, sizeof(RRCConnectionRequest_t));
    rrcRequest->criticalExtensions.present  = RRCConnectionRequest__criticalExtensions_PR_rrcConnectionRequest_r8;

    const countNums = 7;
    const sizeNum = 1;
    uint8_t* randbuf = (uint8_t*)calloc(countNums,sizeNum);


    rrcRequest->criticalExtensions.choice.rrcConnectionRequest_r8.ue_Identity.choice.randomValue.buf = randbuf;
    rrcRequest->criticalExtensions.choice.rrcConnectionRequest_r8.ue_Identity.choice.randomValue.size = countNums;
    rrcRequest->criticalExtensions.choice.rrcConnectionRequest_r8.ue_Identity.choice.randomValue.bits_unused = 0;
    rrcRequest->criticalExtensions.choice.rrcConnectionRequest_r8.ue_Identity.choice.randomValue.buf[0] = 77;
    rrcRequest->criticalExtensions.choice.rrcConnectionRequest_r8.ue_Identity.choice.randomValue.buf[1] = 88;
    rrcRequest->criticalExtensions.choice.rrcConnectionRequest_r8.ue_Identity.choice.randomValue.buf[2] = 99;
    rrcRequest->criticalExtensions.choice.rrcConnectionRequest_r8.ue_Identity.choice.randomValue.buf[3] = 100;
    rrcRequest->criticalExtensions.choice.rrcConnectionRequest_r8.ue_Identity.choice.randomValue.buf[4] = 110;
    rrcRequest->criticalExtensions.choice.rrcConnectionRequest_r8.ue_Identity.choice.randomValue.buf[5] = 177;
    rrcRequest->criticalExtensions.choice.rrcConnectionRequest_r8.ue_Identity.choice.randomValue.buf[6] = 99;
    rrcRequest->criticalExtensions.choice.rrcConnectionRequest_r8.ue_Identity.present = InitialUE_Identity_PR_randomValue;

    rrcRequest->criticalExtensions.choice.rrcConnectionRequest_r8.establishmentCause = EstablishmentCause_mo_Signalling;
    const sizeElement = 1;
    const countElement = 2;
    uint8_t* buf = (uint8_t*)calloc(countElement,sizeElement);

    rrcRequest->criticalExtensions.choice.rrcConnectionRequest_r8.spare.buf = buf;
    rrcRequest->criticalExtensions.choice.rrcConnectionRequest_r8.spare.buf[0] = 1;
    rrcRequest->criticalExtensions.choice.rrcConnectionRequest_r8.spare.buf[1] = 1;
    rrcRequest->criticalExtensions.choice.rrcConnectionRequest_r8.spare.size =countElement;
    rrcRequest->criticalExtensions.choice.rrcConnectionRequest_r8.spare.bits_unused =  0;

    asn_encode_to_new_buffer_result_t res = {NULL, {0, NULL, NULL}};
    res = asn_encode_to_new_buffer(NULL, ATS_CANONICAL_XER, &asn_DEF_RRCConnectionRequest, rrcRequest);
    free(res.buffer);
    memset(&res, 0, sizeof(res));
    res = asn_encode_to_new_buffer(NULL, ATS_CANONICAL_XER, &asn_DEF_RRCConnectionRequest, rrcRequest);

    *buffer = res.buffer;
    *len = res.result.encoded;

    if (*buffer == NULL) {
        fprintf(stderr, "Error enconing rrc buffer\n");
        exit(1);
    } else {
        fprintf(stderr, "Encoded buffer\n");
    }

    printf("len = %ld", *len);

    xer_fprint(stdout, &asn_DEF_RRCConnectionRequest, rrcRequest);

}

void RRCConnection(uint8_t **buffer,ssize_t* len)
{
    struct sockaddr_in servaddr;
    servaddr.sin_family = AF_INET;
    servaddr.sin_port = htons(8888);
    servaddr.sin_addr.s_addr = inet_addr("127.0.0.1");
    int sock = socket(AF_INET,SOCK_STREAM,0);

    if(sock < 0)
    {
        printf("socket not open");
    }

    int ret = connect(sock, (struct sockaddr *)&servaddr, sizeof(servaddr));

    if (ret < 0) {
        printf("Error when connecting socket\n");
        exit(1);
    }else
    {
        printf("Connecting\n");
    }

    if(buffer == NULL)
    {
        printf("Buffer == NULL\n");
    }

    printf("Size == %d\n", *len);

    ret = send(sock, *buffer, *len,0);
    if (ret < 0) {
        printf("Error when sending msg\n");
        exit(1);
    }
    printf("Sent packet\n");
    ReceiveRRCConnectionSetup(sock);
    close(sock);

}



int main()
{
    uint8_t  *buffer;
    ssize_t len;
    RRCConnectionRequest_coder(&buffer,&len);
    RRCConnection(&buffer,&len);

    return 0;
}
