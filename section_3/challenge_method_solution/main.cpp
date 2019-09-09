//
// Created by anfernee on 9/5/19.
//

#include "encrypt.h"
#include "tester.h"


int main(){

    char originalString1[] = "Alpha Zero Bravo Charlie";
    char originalString2[] = "This WaS Fun, no?";

    char encodedString1[25] = "";
    char encodedString2[18] = "";
    char cipherKey = 'e';


    // Below this line are the test cases. You don't need to worry about the code here.
    // You shouldn't change it either

    encryptString(originalString1, encodedString1, cipherKey);

    assert("Test #1 Failed! Expected encodedString and expectedOutput1 to be the identical, "
            "but they're not. expectedOutput looks like this: Eptle Divs Fvezs Glevpmi",
    strcmp(encodedString1, expectedOutput1) == 0);

    std::cout << "Test #1 Passed." << std::endl;

    encryptString(originalString2, encodedString2, cipherKey);

    assert("Test #1 Failed! Expected encodedString and expectedOutput1 to be the identical, "
            "but they're not. expectedOutput looks like this: Eptle Divs Fvezs Glevpmi",
            strcmp(encodedString2, expectedOutput2) == 0);

    std::cout << "Test #2 Passed." << std::endl;
}
