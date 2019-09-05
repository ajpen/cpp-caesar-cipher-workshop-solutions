//
// Created by anfernee on 9/5/19.
//

#include "alphabet.h"
#include "tester.h"

int main(){

    assert(("Test #1 Failed! Expected characterToAlphabeticalIndex('A') to return 0, but it didn't! :(",
            characterToAlphabeticalIndex('A') == 0));

    std::cout << "Test #1 Passed." << std::endl;


    assert(("Test #2 Failed! Expected characterToAlphabeticalIndex('L') to return 11, but it didn't! :(",
            characterToAlphabeticalIndex('L') == 11));

    std::cout << "Test #2 Passed." << std::endl;

    assert(("Test #3 Failed! Expected characterToAlphabeticalIndex('e') to return 4, but it didn't! :(",
            characterToAlphabeticalIndex('e') == 4));

    std::cout << "Test #3 Passed." << std::endl;

    assert(("Test #4 Failed! Expected characterToAlphabeticalIndex('z') to return 25, but it didn't! :(",
            characterToAlphabeticalIndex('z') == 25));

    std::cout << "Test #4 Passed." << std::endl;


    assert(("Test #5 Failed! Expected characterToAlphabeticalIndex('%') to return -1, but it didn't! :(",
            characterToAlphabeticalIndex('%') == -1));

    std::cout << "Test #5 Passed." << std::endl;
}