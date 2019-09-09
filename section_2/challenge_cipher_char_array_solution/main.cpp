//
// Created by anfernee on 9/5/19.
//

#include "caesar.h"
#include "tester.h"


int main(){

    char originalString[] = "Alpha Zero Bravo Charlie";
    char encodedString[25] = "";
    char cipherKey = 'e';


    // Here, you'll create a loop that will encode every letter in the originalString
    for(int i=0; i<strlen(originalString); i++){
        encodedString[i] = encodeChar(originalString[i], cipherKey);
     }


    // Below this line is the test case. You don't need to worry about the code here.
    // You shouldn't change it either

    assert("Test #1 Failed! Expected encodedString and expectedOutput to be the identical, "
            "but they're not. expectedOutput looks like this: Eptle Divs Fvezs Glevpmi",
            strcmp(encodedString, expectedOutput) == 0);

    std::cout << "Test #1 Passed." << std::endl;
}