/*
 * ex05.cpp
 * 
 * You sell the book C++ for Fools. Write a program that has you enter a 
 * year's worth for monthly sales (in terms of number of books, not of money).
 * The program should use a loop to prompt you by month, using an array of
 * char* (or an array of string objects, if you prefer) initialized to the
 * month strings and storing the input data in an array of int. Then, the
 * program should find the sum of the array contents and report the total
 * sales for the year.
 *
 */
#include <iostream>
#include <string>

const int NumMonths = 12;

int main()
{
    using namespace std;

    string months[] = {"January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"};
    int booksSold[NumMonths];

    for (int i = 0; i < NumMonths; i++) {
        cout << "Please enter " << months[i] << " book sales: ";
        cin >> booksSold[i];
    }

    int total = 0;
    for (int i = 0; i < NumMonths; i++) {
        total += booksSold[i];
    }

    cout << "Total books sold: " << total << endl;

    return 0;
}
