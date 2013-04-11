// ex6.cpp
#include <iostream>

int main()
{
    using namespace std;

    int miles, gallons;

    cout << "Enter miles driven: ";
    cin >> miles;
    cout << "Enter gallons used: ";
    cin >> gallons;

    double mpg = double(miles) / double(gallons);

    cout << "MPG = " << mpg << endl;

    return 0;
}
