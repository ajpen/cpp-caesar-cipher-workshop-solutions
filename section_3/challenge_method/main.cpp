//
// Created by anfernee on 9/5/19.
//

#include "encrypt.h"
#include "tester.h"


int main(){

    char originalString1[] = "Alpha Zero Bravo Charlie";
    char originalString2[] = "This WaS Fun, no?";

    char encodedString[23] = "";
    char cipherKey = 'e';


    // Below this line are the test cases. You don't need to worry about the code here.
    // You shouldn't change it either

    encryptString(originalString1, encodedString, cipherKey);

    assert("Test #1 Failed! Expected encodedString and expectedOutput1 to be the identical, "
            "but they're not. expectedOutput looks like this: Eptle Divs Fvezs Glevpmi",
    strcmp(encodedString, expectedOutput1) == 0);


    encryptString(originalString2, encodedString, cipherKey);

    assert("Test #1 Failed! Expected encodedString and expectedOutput1 to be the identical, "
            "but they're not. expectedOutput looks like this: Eptle Divs Fvezs Glevpmi",
            strcmp(encodedString, expectedOutput2) == 0);
}