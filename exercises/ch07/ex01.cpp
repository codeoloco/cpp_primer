/*****************************************************************************
 * ex01.cpp -- exercise 1 chapter 7
 *
 * Write a progran that repeatedly asks the user to enter pairs of numbers
 * until at least one of the pair is 0. For each pair, the program should
 * use a function to calculate the hormonic means of the numbers. The function
 * should return the answer to main(), which should report it. The harmonic
 * mean of the numbers is the inverse of the average of the inverses and can
 * be calculated as follows:
 *
 * harmonic mean = 2.0 * x * y / (x + y)
 *
 */
#include <iostream>

const char* kPrompt = "Please enter a pair of numbers (at least one 0 to quit): ";

double calc_harmonic_mean(double, double);

int main()
{
    using namespace std;

    double x, y;

    cout << kPrompt << endl;
    cin >> x >> y;
    while (x != 0 && y != 0) {
        cout << "The harmomic mean of " << x << " and " << y << " is "
             << calc_harmonic_mean(x, y) << ".\n";
        cout << kPrompt << endl;
        cin >> x >> y;
    }

    cout << "Bye!\n";
    return 0;
}

double calc_harmonic_mean(double x, double y) {
    return 2.0 * x * y / (x + y);
}
