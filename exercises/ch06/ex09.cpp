/*****************************************************************************
 * ex09.cpp - chapter 6 exercise 9
 *
 * Do programming Exercise 6 but modify it to get information from a file. The
 * first item in the file should be the number of contributors, and the rest of
 * the file should consist if pairs of lines, with the first line of each pair
 * being a contributor's name and the second line being a contribution. That
 * is, the file shold look like this:
 *
 * 4
 * Sam Stone
 * 2000
 * Freida Flass
 * 100500
 * Tammy Tubbs
 * 5000
 * Rich Raptor
 * 55000
 *
 */
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

struct contribution {
    string name;
    double amount;
};

int main()
{
    int numContributors = 0;
    string filename;
    ifstream fin;

    cout << "Please enter data file name: ";
    cin >> filename;

    fin.open(filename);
    if (!fin.is_open()) {
        cout << "Could not open file " << filename << endl;
        cout << "Process terminating\n";
        exit(EXIT_FAILURE);
    }

    fin >> numContributors;
    fin.get();

    contribution * contributions = new contribution[numContributors];

    for (int i = 0; i < numContributors; i++) {
        string name;
        double amount;
        getline(fin, name);
        fin >> amount;
        fin.get();
        contribution c;
        c.name = name;
        c.amount = amount;
        contributions[i] = c;
    }

    fin.close();

    // displays Grand Patrons
    bool foundOne = false;
    cout << "Grand Patrons\n";
    for (int i = 0; i < numContributors; i++) {
        if (contributions[i].amount >= 10000) {
            cout << contributions[i].name << "\t" 
                 << contributions[i].amount << endl;
            foundOne = true;
        }
    }
    if (!foundOne) {
        cout << "none\n";
    }

    // display the rest
    cout << "Patrons\n";
    foundOne = false;
    for (int i = 0; i < numContributors; i++) {
        if (contributions[i].amount < 10000) {
            cout << contributions[i].name << "\t"
                 << contributions[i].amount << endl;
            foundOne = true;
        }
    }
    if (!foundOne) {
        cout << "none\n";
    }

    // clean up
    delete[] contributions;

    return 0;
}


