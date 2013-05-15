/*****************************************************************************
 * ex06.cpp - chapter 6 exercise 6
 *
 * Put together a program that keeps track of monetary contributions to the 
 * Society for the Presentation of Rightful Influence. It should ask the user
 * to enter the number of contributors and then solicit the user to enter 
 * the name and contribution of each contributor. The information should be
 * stored in a dynamically allocated array of structures. Each structure 
 * should have two members: a character array (or else a string object) to
 * store the name and a double member to hold the amount of the contribution.
 * After reading all the data, the program should display the names and 
 * amounts donated for all donors who contributed $10,000 or more. This list
 * should be headed by the label Grand Patrons. After that, the program
 * should list he reaming donors. That list should be headed Patrons. If there
 * are no donors in one on the categories, the program should print the 
 * word 'none'. Aside from displaying two categories, the program need do
 * no sorting.
 */
#include <iostream>
#include <string>

using namespace std;

struct contribution {
    string name;
    double amount;
};

int main()
{
    int numContributors = 0;

    cout << "Please enter the number of contributors: ";
    cin >> numContributors;

    contribution * contributions = new contribution[numContributors];

    for (int i = 0; i < numContributors; i++) {
        string name;
        double amount;
        cout << "Please enter contributor's name: ";
        cin >> name;
        cout << "Please enter contribution amount: ";
        cin >> amount;
        contribution c;
        c.name = name;
        c.amount = amount;
        contributions[i] = c;
    }

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


