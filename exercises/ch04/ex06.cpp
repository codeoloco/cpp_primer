// ex06.cpp -- chapter 4 exercise 6
#include <iostream>
#include <string>

using namespace std;

const int NumBars = 3;

struct CandyBar
{
    string brandName;
    float weight;
    int calories;
};

int main()
{
    CandyBar candyBars[NumBars] =
    {
        {"Snickers", 32.4, 100},
        {"Kit Kat", 12.5, 120},
        {"Milky Way", 35.4, 150}
    };

    cout << "Candy Bars:\n";
    for (int i = 0; i < NumBars; i++) {
        cout << "\tCandy Bar:" << endl;
        cout << "\t   Brand Name : " << candyBars[i].brandName << endl;
        cout << "\t   Weight     : " << candyBars[i].weight << endl;
        cout << "\t   Calories   : " << candyBars[i].calories << endl;
    }

    return 0;
}
