/* 
 * File:   main.cpp
 * Author: jclements
 * 
 * The Kingdom of Neutronia, where the unit of currency is the, tvarp, has the
 * following income tax code:
 * 
 *      First 5,000 tvarps: 0% tax
 *      Next 10,000 tvarps: 10% tax
 *      Next 20,000 tvarps: 15% tax
 *      Tvarps after 35,000: 20% tax
 * 
 * For example, someone earning 38,000 tvarps would owe 5,000 * 0.00 + 
 * 10,000 * 0.10 + 20,000 * 0.15 + 3,000 * 0.20, or 4,600 tvarps. Write a 
 * program that uses a loop to solicit income and to report tax owed. The loop
 * should terminate when the user enters a negative number of non-numeric input.
 *
 * Created on May 2, 2013, 2:55 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    double income = 0;
    
    cout << "Enter your income: ";
    while (cin >> income && income >= 0) {
        
        double copy = income;
        double tax = 0.0;
        
        if (copy > 35000) {
            tax += (copy - 35000) * 0.20;
            copy = 35000;
        }
        
        if (copy > 15000) {
            tax += (copy - 15000) * 0.15;
            copy = 15000;
        }
        
        if (copy > 5000) {
            tax += (copy - 5000) * 0.10;
        }
        
        cout << "You tax is : " << tax << endl;
        
        cout << "Enter your income: ";
    }

    return 0;
}

