// ex07.cpp - chapter 4, exercise 7
#include <iostream>
#include <string>

using namespace std;

struct Pizza
{
    string company;
    int diameter;
    int weight;
};

int main()
{
    Pizza aPizza;

    cout << "Pizza company name : ";
    getline(cin, aPizza.company);
    cout << "Pizza diameter : ";
    cin >> aPizza.diameter;
    cout << "Pizza weight : ";
    cin >> aPizza.weight;

    cout << endl << "Pizza ....." << endl;
    cout << "\tCompany  : " << aPizza.company << endl;
    cout << "\tDiameter : " << aPizza.diameter << endl;
    cout << "\tWeight   : " << aPizza.weight << endl;

    return 0;
}
