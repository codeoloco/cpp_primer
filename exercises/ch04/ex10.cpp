// ex10.cpp -- chapter 4, exercise 10
//
// Write a program that requests the user to enter three times for the 
// 40-yd dash (or 40-meter, if you prefer) and then displays the times and
// the average. Use an array object to gold the data. (Use a built-in
// array of array is not available.)
#include <iostream>
#include <array>

const int MaxTimes = 3;

int main()
{
    using namespace std;

    array<double, MaxTimes> times;
    int i = 0;

    cout << "Please enter 3 times for the 40-meter.\n";
    
    for (i = 0; i < MaxTimes; i++) {
        cout << "\tTime " << i + 1 << ": ";
        cin >> times[i];
    }

    cout << endl << "The times you entered are: " << endl;
    double totalTime = 0.0;
    for (i = 0; i < MaxTimes; i++) {
        cout << "\tTime " << i + 1 << ": " << times[i] << endl;
        totalTime += times[i];
    }
    cout << "Your average time is: " << totalTime / MaxTimes << endl;

    return 0;
}

