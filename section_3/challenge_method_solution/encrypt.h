//
// Created by anfernee on 9/5/19.
//

#ifndef CPP_CAESAR_CIPHER_WORKSHOP_ENCRYPT_H
#define CPP_CAESAR_CIPHER_WORKSHOP_ENCRYPT_H

#include <cstring>

#include "caesar.h"

// define a function prototype called encryptString that takes 2 char arrays, original and encrypted,
// and writes the encryption of the char array original into the char array encrypted
void encryptString(char* original, char* encrypted, char key);

#endif //CPP_CAESAR_CIPHER_WORKSHOP_ENCRYPT_H
