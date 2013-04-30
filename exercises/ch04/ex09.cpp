// ex09.cpp -- chapter 4 exercise 9
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
    CandyBar *candyBars = new CandyBar[NumBars];

    candyBars[0].brandName = "Snickers";
    candyBars[0].weight = 32.4;
    candyBars[0].calories = 100;
    candyBars[1].brandName = "Kit Kat";
    candyBars[1].weight = 12.5; 
    candyBars[1].calories = 120;
    candyBars[2].brandName = "Milky Way";
    candyBars[2].weight = 35.4;
    candyBars[2].calories = 150;

    cout << "Candy Bars:\n";
    for (int i = 0; i < NumBars; i++) {
        cout << "\tCandy Bar:" << endl;
        cout << "\t   Brand Name : " << candyBars[i].brandName << endl;
        cout << "\t   Weight     : " << candyBars[i].weight << endl;
        cout << "\t   Calories   : " << candyBars[i].calories << endl;
    }

    delete [] candyBars;

    return 0;
}
