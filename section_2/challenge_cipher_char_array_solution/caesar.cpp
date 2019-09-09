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

    // if the letter or key aren't alphabetical, we'll return the letter untouched
    if(!isalpha(letter) || !isalpha(key)){
        return letter;
    }

    // replace the line below with your solution
    int letter_index = characterToAlphabeticalIndex(letter);
    int key_index = characterToAlphabeticalIndex(key);
    int new_letter_index = (letter_index + key_index) % 26;

    if(isupper(letter)){
        return static_cast<char>(new_letter_index + 'A');
    }

    else{
        return static_cast<char>(new_letter_index + 'a');
    }
}