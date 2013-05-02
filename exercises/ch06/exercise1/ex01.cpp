/* 
 * File:   ex01.cpp
 * Author: jclements
 * 
 * Write a program that reads keyboard input to the '@' symbol and
 * that echoes the input except for digits, converting each
 * uppercase character to lowercase, and vise versa. (Don't forget
 * the cctype family.)
 *
 * Created on May 2, 2013, 1:27 PM
 */

#include <iostream>
#include <cctype>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    cout << "Enter characters (@ to stop)\n";
    char ch;
    
    cin.get(ch);
    while (ch != '@') {
        if (isalpha(ch)) {
            if (islower(ch)) {
                cout << char(toupper(ch));
            } else {
                cout << char(tolower(ch));
            }
        }
        cin.get(ch);
    }

    return 0;
}

