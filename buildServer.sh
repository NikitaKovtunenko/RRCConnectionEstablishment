rm -r src/*
rm -r build/*
mkdir src
mkdir build
gcc -pthread -g -Isrc -I. -o build/server server/server.c src/*.c -DPDU=RRCConnectionSetup -DASN_DISABLE_OER_SUPPORT
asn1c -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example  -fno-include-deps asn/EUTRA-RRC-Definitions.asn
./build/server