//
// Created by anfernee on 9/5/19.
//

#ifndef CPP_CAESAR_CIPHER_WORKSHOP_TESTER_H
#define CPP_CAESAR_CIPHER_WORKSHOP_TESTER_H

#include <cstdlib>
#include <iostream>

void assert(const char* message, bool expression_result){
    if (!expression_result){
        std::cout << message << std::endl;
        std::abort();
    }
}

char* expectedOutput1 = "Eptle Divs Fvezs Glevpmi";
char* expectedOutput2 = "Xlmw AeW Jyr, rs?";

#endif //CPP_CAESAR_CIPHER_WORKSHOP_TESTER_H
