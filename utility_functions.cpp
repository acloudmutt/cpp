#include<iostream>
#include "utility_functions.h"

using namespace std;

void reverse_str()
{
    string str;

    // discards the input buffer
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << " Please enter a string " << endl;
    getline(cin, str);
        
    // function call
    reverse(str);   
}

// function definition
void reverse(const string& str) {

    // store the size of the string
    size_t numOfChars = str.size();

    if(numOfChars == 1) {
        cout << str << endl;
    }
    else {
        cout << str[numOfChars - 1];

        // function recursion
        reverse(str.substr(0, numOfChars - 1));
    }
}

