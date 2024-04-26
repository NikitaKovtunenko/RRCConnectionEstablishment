gcc -g -Isrc -I. -o build/client client/client.c src/*.c -DPDU=RRCConnectionRequest -DASN_DISABLE_OER_SUPPORT
./build/client

