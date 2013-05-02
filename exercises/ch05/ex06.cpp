/*
 * ex06.cpp
 * 
 * Do Programming Exercise 5 but use a two-dimentional array to store input
 * for 3 years of monthly sales. Report the total sales for each individual
 * year and for the combined years.
 *
 */
#include <iostream>
#include <string>

const int NumMonths = 12;
const int NumYears = 3;

int main()
{
    using namespace std;

    string months[] = {"January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"};
    int booksSold[NumYears][NumMonths];

    for (int i = 0; i < NumYears; i++) {
        cout << "Please enter sales figures for year " << i + 1 << endl;
        for (int j = 0; j < NumMonths; j++) {
            cout << "Please enter " << months[j] << " book sales: ";
            cin >> booksSold[i][j];
        }
    }

    int totalTotal = 0;
    for (int i = 0; i < NumYears; i++) {
        int total = 0;
        for (int j = 0; j < NumMonths; j++) {
            total += booksSold[i][j];
        }
        cout << "Total for year " << i + 1 << ": " << total << endl;
        totalTotal += total;
    }
    cout << "Total books sold: " << totalTotal << endl;

    return 0;
}
