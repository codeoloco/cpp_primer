// ex5.cpp
#include <iostream>

int main()
{
    using namespace std;

    long long pop, usPop;

    cout << "Enter the world's population: ";
    cin >> pop;
    cout << "Enter the population of the US: ";
    cin >> usPop;

    double percPop = (static_cast<double>(usPop) / static_cast<double>(pop)) * 100.0;

    cout << "The population of the US is " << percPop
         << "% of the world population.\n";

    return 0;
}
