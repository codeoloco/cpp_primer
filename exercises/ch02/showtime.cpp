// showtime.cpp - exercise 7
#include <iostream>

void printTime(int, int);

int main()
{
    using namespace std;

    int hours;
    int mins;

    cout << "Enter the number of hours: ";
    cin >> hours;
    cout << "Enter the number of minutes: ";
    cin >> mins;

    printTime(hours, mins);

    return 0;
}

void printTime(int h, int m)
{
    using namespace std;
    cout << "Time: " << h << ':' << m << endl;
}
