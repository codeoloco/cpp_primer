/*
 * ex08.cpp
 * 
 * Write a program that uses an array of char and a loop to read one word at
 * a time until the word done is entered. The program should then report the 
 * number of words entered (not counting done). A sample run should look
 * like this:
 *
 *      Enter words (to stop, type the word done):
 *      anteater birthday category dumpster
 *      envy finagle geometry done for sure
 *      You entered a total of 7 words.
 *
 * You should include the cstring header file and use the strcmp() function
 * to make the comparison test.
 *
 */
#include <iostream>
#include <cstring>

const char *DoneString = "done";
const int WordSize = 40;

int main()
{
    using namespace std;

    int total = 0;
    char word[WordSize];
    
    cout << "Enter words (to stop, type the word done):\n";
    cin >> word;
    while (strcmp(word, DoneString) != 0) {
        total++;
        cin >> word;
    }

    cout << "You entered a total of " << total << " words.\n";

    return 0;
}
