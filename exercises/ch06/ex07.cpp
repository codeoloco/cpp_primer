/*****************************************************************************
 * ex07.cpp - chapter 6 exercise 7
 *
 * Write a program that reads input a word at a time until a line q is 
 * entered. The program should the report the number of words that began with
 * vowels, the number of words that began with consonants, and the number
 * that fit neither of those categories. One approach is to use isalpha()
 * to discriminate between words beginning with letters and those that don't
 * and then use an if or switch statement to further identify those passing 
 * the isalpha() test that begins with vowels. A sample run might look
 * like this:
 *
 * Enter words (q to quit):
 * The 12 awesome oxen ambled
 * quietly across 15 meters of lawn. q
 * 5 words beginning with vowels
 * 4 words beginning with consonants
 * 2 others
 *
 ****************************************************************************/
#include <iostream>
#include <string>
#include <cctype>

int main() {
    
    using namespace std;

    int numVowels = 0;
    int numConsonants = 0;
    int numOther = 0;
    string word;

    cout << "Enter words (q to quit):\n";

    cin >> word;
    while (word != "q") {
        if (isalpha(word[0])) {
            switch(word[0]) {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                    numVowels++;
                    break;
                default:
                    numConsonants++;
                    break;
            }
        } else {
            numOther++;
        }
        cin >> word;
    }

    cout << numVowels << " words beginning with vowels\n";
    cout << numConsonants << " words beginning with consonants\n";
    cout << numOther << " others\n";
    
    return 0;
}
