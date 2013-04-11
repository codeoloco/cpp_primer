// ex05.cpp
#include <iostream>
#include <string>

struct CandyBar 
{
    std::string brandName;
    float weight;
    int calories;
};

int main () 
{
    using namespace std;

    CandyBar bar = {"Mocha Munch", 2.3, 350};
    
    cout << "Candy Bar" << endl;
    cout << "   Brand Name : " << bar.brandName << endl;
    cout << "   Weight     : " << bar.weight << endl;
    cout << "   Calories   : " << bar.calories << endl;

    return 0;
}
