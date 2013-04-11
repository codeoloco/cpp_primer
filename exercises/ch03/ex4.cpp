// ex4.cpp
#include <iostream>

int main()
{
    using namespace std;

    const int kHoursInDay = 24;
    const int kMinsInHour = 60;
    const int kSecsInMin = 60;

    long long seconds;

    cout << "Enter the number of seconds: ";
    cin >> seconds;

    long long workSeconds = seconds;
    
    long long days = workSeconds / (kHoursInDay * kMinsInHour * kSecsInMin);
    workSeconds = workSeconds % (kHoursInDay * kMinsInHour * kSecsInMin);
    long long hours = workSeconds / (kMinsInHour * kSecsInMin);
    workSeconds = workSeconds % (kMinsInHour * kSecsInMin);
    long long mins = workSeconds / kSecsInMin;
    long long secs = workSeconds % kSecsInMin;
    
    cout << seconds << " seconds = " << days << " days, " << hours << " hours, "
         << mins << " minutes, " << secs << " seconds\n";

    return 0;
}
