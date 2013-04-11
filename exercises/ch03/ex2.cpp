// ex2.cpp
#include <iostream>
#include <cmath>

int main()
{
    using namespace std;

    const int kFeet = 12;
    const double kFeetToMeter = 0.0254;
    const double kLbsToKiloFactor = 2.2;

    int heightFeet;
    int heightInches;
    int weightInLbs;

    cout << "Enter your height feet: ";
    cin >> heightFeet;
    cout << "Enter your height inches: ";
    cin >> heightInches;
    cout << "Enter weight in pounds: ";
    cin >> weightInLbs;

    int heightInInches = (heightFeet * kFeet) + heightInches;
    double heightInMeters = double(heightInInches) * kFeetToMeter;
    double weightInKilos = double(weightInLbs) / kLbsToKiloFactor;
    double bmi = weightInKilos / pow(heightInMeters, 2.0);

    cout << "BMI = " << bmi << endl;

    return 0;
}
