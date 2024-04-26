# RRCConnectionEstablishment
client:RRCConnectionRequest => server:decode(RRCConnectionRequest) => server:RRCConnectionSetup => client:decode(RRCConnectionSetup) 
Вот такая структура 
Сервер сделал многопоточным 
файлы buildClient.sh buildServer.sh не успел проверить на работоспособность 
Подразумевается что сначала будет собран сервер
Клиент и сервер корректно отрабатывают, сообщения кодируются и декодируются 