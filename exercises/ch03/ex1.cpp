// ex1.cpp
#include <iostream>

int main()
{
    using namespace std;

    const int kFeet = 12;
    int height, feet, inches;

    cout << "Please enter your height in inches: ____\b\b\b\b";
    cin >> height;
    feet = height / kFeet;
    inches = height % kFeet;
    cout << height << " inches is " << feet << " feet " << inches << " inches\n";

    return 0;
}
