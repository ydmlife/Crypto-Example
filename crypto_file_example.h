#ifndef CRYPTO_FILE_EXAMPLE_H
#define CRYPTO_FILE_EXAMPLE_H

#include <stdio.h>
#include <errno.h>
#include <string.h>

#include "base64.h"
#include "Crypto.h"

// Uncomment to write the encrypted file encoded in base 64
// #define CONVERT_TO_BASE64

char* encryptFile(Crypto *crypto, char *filename);
void decryptFile(Crypto *crypto, char *filename, char *encryptedFilename);

char* encryptData2File(Crypto *crypto, char *data);
unsigned char * decryptFile2Data(Crypto *crypto, char *encryptedFilename, unsigned char **decryptedData);

void writeFile(char *filename, unsigned char *file, size_t fileLength);
int readFile(char *filename, unsigned char **file);

char* appendToString(char *string, char *suffix);

#endif
