/* 
 * ex09.cpp
 *
 * Write a program the matches the description of the program in Programming
 * Exercise 8, but use a string class object instead of an array. Include
 * the string header file and use a relational operator to make the
 * comparison test.
 */
#include <iostream>
#include <string>

const std::string DoneString = "done";

int main() 
{
    using namespace std;

    int total = 0;
    string word;

    cout << "Enter words (to stop, type the word done):\n";
    cin >> word;
    while (word != DoneString) {
        total++;
        cin >> word;
    }

    cout << "You entered a total of " << total << " words.\n";

    return 0;
}
