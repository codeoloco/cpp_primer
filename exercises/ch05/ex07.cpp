/*
 * ex07.cpp
 *
 * Design a structure called car that holds the following information about an
 * automibile: its make, as a string in a character object or in a string
 * object, and the year is was built, as an integer. Write a program that asks
 * the user how many cars to catalog. The program should then use new to
 * create a dynamic array of that many car structures. Next, it should prompt
 * the user to input the make (which might consist of more than one word) and
 * year information for each structure. Note that this requires some care 
 * because it alternates reading strings with numeric data. Finally, it should
 * display the contents of each structure. A sample run shoule look something
 * like the following.
 *
 *      How many cars do you wish to catalog? 2
 *      Car #1:
 *      Please enter the make: Hudson Hornet
 *      Please enter the year made: 1952
 *      Car #2:
 *      Please enter the make: Kaiser
 *      Please enter the year made: 1951
 *      Here is your collection:
 *      1952 Hudson Hornet
 *      1951 Kaiser
 *
 */
#include <iostream>
#include <string>

struct automobile {
    std::string make;
    int year;
};

int main()
{
    using namespace std;

    int numCars = 0;
    cout << "How many cars do you wish to catalog? ";
    cin >> numCars;
    cin.get();

    automobile *collection = new automobile[numCars];

    for (int i = 0; i < numCars; i++) {
        cout << "Car #" << i + 1 << ": \n";
        cout << "Please enter the make: " ;
        getline(cin, collection[i].make);
        cout << "Please enter the year made: ";
        cin >> collection[i].year;
        cin.get();
    }

    cout << "Here is you collection:\n";
    for (int i = 0; i < numCars; i++) {
        cout << collection[i].year << " " << collection[i].make << endl;
    }

    delete [] collection;

    return 0;
}
