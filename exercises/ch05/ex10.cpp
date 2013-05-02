/*
 * ex10.cpp
 *
 * Write a program using nested loops that ask the user to enter a value for
 * the number of rows to diplay. It should then display that many rows of
 * asterisks, with one asterisk in the first row, two in the second row, and 
 * so on. For each row, the asterisks are preceded by the number of periods
 * needed to make all the rows display a total number of characters equal to
 * the number of rows. A sample run would look like this:
 *
 *      Enter number of rows: 5
 *      ....*
 *      ...**
 *      ..***
 *      .****
 *      *****
 *
 */
#include <iostream>

int main()
{
    using namespace std;

    int numRows;

    cout << "Enter number of rows: ";
    cin >> numRows;

    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numRows; j++) {
            cout << ((j >= (numRows - 1 - i)) ? '*' : '.');
        }
        cout << endl;
    }

    return 0;
}
