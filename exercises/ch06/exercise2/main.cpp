/* 
 * File:   main.cpp
 * Author: jclements
 * 
 * Write a program that reads up to 10 donation values into an array of double.
 * (Or, if you prefer, use an array template object.) The program should
 * terminate input on non-numeric input. It should report the average of the
 * numbers and also report how many numbers in the array are large than
 * the average.
 *
 * Created on May 2, 2013, 1:39 PM
 */

#include <iostream>

using namespace std;

const int MaxDonations = 100;

/*
 * 
 */
int main(int argc, char** argv) {
    
    double donations[MaxDonations];
    int count = 0;
    
    cout << "Please enter up to 100 donations (non-numeric to quit):\n";
    while (count < MaxDonations && cin >> donations[count]) {
        count++;
    }
    
    double sum = 0.0;
    for (int i = 0; i < count; i++) {
        sum += donations[i];
    }
    double average = sum / double(count);
    
    int cntGreaterAvg = 0;
    for (int i = 0; i < count; i++) {
        if (donations[i] > average) {
            cntGreaterAvg++;
        }
    }
    
    cout << "Average : " << average << endl;
    cout << "Count Greater than Average : " << cntGreaterAvg << endl;

    return 0;
}

