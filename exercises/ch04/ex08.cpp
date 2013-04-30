// ex08.cpp - chapter 4, exercise 8
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
    Pizza *aPizza = new Pizza;

    cout << "Pizza diameter : ";
    cin >> aPizza->diameter;
    cin.get();
    cout << "Pizza company name : ";
    getline(cin, aPizza->company);
    cout << "Pizza weight : ";
    cin >> aPizza->weight;

    cout << endl << "Pizza ....." << endl;
    cout << "\tCompany  : " << aPizza->company << endl;
    cout << "\tDiameter : " << aPizza->diameter << endl;
    cout << "\tWeight   : " << aPizza->weight << endl;

    delete aPizza;

    return 0;
}
