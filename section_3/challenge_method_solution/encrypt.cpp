//
// Created by anfernee on 9/5/19.
//

#include "encrypt.h"

// define a function called encryptString that takes 2 char arrays named original
// and encrypted and a char key, and writes the encryption of the char array original into
// the char array named 'encrypted'

void encryptString(char* original, char* encrypted, char key){
    for(int i=0; i<strlen(original); i++){
        encrypted[i] = encodeChar(original[i], key);
    }
}