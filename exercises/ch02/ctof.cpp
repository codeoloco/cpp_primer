// ctof.cpp - exercise 5
#include <iostream>

int ctof(int);

using namespace std;

int main()
{
    int celsius;

    cout << "Please enter a Celcius value: ";
    cin >> celsius;

    cout << celsius << " degrees Celsius is " << ctof(celsius) 
         << " degrees Fahrenheit." << endl;

    return 0;
}

int ctof(int c)
{
    return (1.8 * c) + 32.0;
}
