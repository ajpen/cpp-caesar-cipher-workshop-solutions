//
// Created by anfernee on 9/5/19.
//

#include "caesar.h"
#include "tester.h"

int main(){

    assert("Test #1 Failed! Expected encodeChar('A', 'B') to return 'B', but it didn't! :(",
            encodeChar('A', 'B') == 'B');

    std::cout << "Test #1 Passed." << std::endl;


    assert("Test #2 Failed! Expected encodeChar('e', 'C') to return 'g', but it didn't! :(",
            encodeChar('e', 'C') == 'g');

    std::cout << "Test #2 Passed." << std::endl;

    assert("test #3 failed! expected encodechar('f', 'g') to return 'l', but it didn't! :(",
            encodeChar('f', 'g') == 'l');

    std::cout << "test #3 passed." << std::endl;

    assert("test #4 failed! expected encodechar('f', 'g') to return 'l', but it didn't! :(",
            encodeChar('f', 'g') == 'l');

    std::cout << "Test #4 Passed." << std::endl;


    assert("Test #5 Failed! Expected encodeChar('V', 'k') to return 'F', but it didn't! :(",
            encodeChar('V', 'k') == 'F');

    std::cout << "Test #5 Passed." << std::endl;

    assert("Test #6 Failed! Expected encodeChar('V', '%') to return 'V', but it didn't! :(",
            encodeChar('V', '%') == 'V');

    std::cout << "Test #6 Passed." << std::endl;


    assert("Test #7 Failed! Expected encodeChar('@', 'e') to return '@', but it didn't! :(",
            encodeChar('@', 'e') == '@');

    std::cout << "Test #7 Passed." << std::endl;
}
