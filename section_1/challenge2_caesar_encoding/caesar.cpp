//
// Created by anfernee on 9/5/19.
//

#include "caesar.h"
#include "alphabet.h"

char encodeChar(char letter, char key){
    /*
     * Given "letter" and "key", return the
     * result of the caesar cipher algorithm applied to "letter".
     *
     * Caesar cipher shifts the position of a letter
     * a number of places down the alphabet based on the
     * position of the key.
     *
     *  for example, if letter='D', and key='C'
     *  the return value would be 'F'
     *
     * This function should preserve the original Case of the character "letter"
     * and should support both uppercase and lowercase characters for "c" and "key"
     *
     * NOTE:
     * If "letter" is not alphabetical, the function should return it unchanged.
     * If "letter" is alphabetical but key is not, the function should return "letter" unchanged
     * */

    if(!isalpha(letter) || !isalpha(key)){
        // if the letter and key aren't alphabetical, we'll return the letter untouched
        return letter;
    }

    // Add your code here

}