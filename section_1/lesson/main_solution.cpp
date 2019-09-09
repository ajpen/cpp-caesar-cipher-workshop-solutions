//
// Created by anfernee on 9/5/19.
//

#include <iostream>
#include <cctype>

using namespace std;

/*
 *  Given what the user entered, we should tell them
 *  if they entered an upper case letter, or lower case letter
 *  or a non alphabetical character
 *
 * */

int main(){
    char input = '\0';

    cout << "Enter a single character followed by the enter/return key: " << endl;


    // First we need to get the user's input and save it in the variable "input"
    cin >> input;

    if(isupper(input)){
        cout << "You entered an uppercase letter: " << input <<  endl;
    }

    else if(islower(input)){
        cout << "You entered a lowercase letter: " << input <<  endl;
    }

    // if its neither than its not an alphabetical character
    else{
        cout << "You entered a non-alphabetical character: " << input << endl;
    }

}