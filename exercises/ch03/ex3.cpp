// ex3.cpp
#include <iostream>

int main()
{
    using namespace std;

    const double kSecsFactor = 3600.0;
    const double kMinsFactor = 60.0;

    double degs, mins, secs;

    cout << "Enter a latitude in degrees, minutes, and seconds:\n";
    cout << "First, enter the degrees: ";
    cin >> degs;
    cout << "Next, enter the minutes of arc: ";
    cin >> mins;
    cout << "Finally, enter the seconds of arc: ";
    cin >> secs;

    double decDegs = static_cast<double>(degs) +
        (static_cast<double>(mins) / kMinsFactor) +
        (static_cast<double>(secs) / kSecsFactor);

    cout << degs << " degrees, " << mins << " minutes, " << secs
         << " seconds = " << decDegs << " degrees" << endl;

    return 0;
}
