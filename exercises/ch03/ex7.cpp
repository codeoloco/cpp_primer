// ex7.cpp
#include <iostream>

int main()
{
    using namespace std;

    const double kLitersToGallon = 3.875;
    const double kMilesPer100KM = 62.14;

    double liters;

    cout << "Enter liters: ";
    cin >> liters;

    cout << "MPG = " << kMilesPer100KM / (liters / kLitersToGallon) << endl;

    return 0;
}
