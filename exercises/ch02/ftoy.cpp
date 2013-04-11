// ftoy.cpp - exercise 2
//  converts furlongs to yards
#include <iostream>

int main()
{
    using namespace std;
    
    int furlongs;
    int yards;
    
    cout << "Enter furlongs: ";
    cin >> furlongs;
    yards = furlongs * 220;
    cout << furlongs << " is " << yards << " yards." << endl;
    return 0;
}