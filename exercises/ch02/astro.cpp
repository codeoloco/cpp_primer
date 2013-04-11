// astro.cpp - exercise 6
#include <iostream>

double lytoau(double);

int main()
{
    using namespace std;

    double lightYears;
    cout << "Enter the number of light years: ";
    cin >> lightYears;

    cout << lightYears << " lights years = " << lytoau(lightYears) 
         << " astronomical units." << endl;

    return 0;
}

double lytoau(double ly)
{
    return ly * 63240;
}
