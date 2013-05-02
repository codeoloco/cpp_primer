/* 
 * File:   main.cpp
 * Author: jclements
 * 
 * When you join the Benevolent Order of Programmers, you can be known at BOP
 * meetings by your real name, your job title, or your secret BOP name. Write
 * a program that can list members by real name, by job title, by secret name,
 * or by member's preference. Base the program on the following structure:
 * 
 *      // Benevolent Order of Programmers name structure
 *      struct bop {
 *              char fullname[strsize]; // real name
 *              char title[strsize];    // job title
 *              char bopname[strsize];  // secret BOP name
 *              int preference;         // 0 = fullname, 1 = title, 2 = bopname
 * 
 * In the program, create a small array of structures and initialize it to
 * suitable values. Have the program run a loop that lets the user select from
 * different alternatives:
 * 
 *      a. display by name      b. display by title
 *      c. display by bopname   d. display by preference
 *      q. quit
 * 
 * Note that "display by preference" does not mean display the preference
 * member; it means display the member corresponding to the preference 
 * number. For instance, if preference is 1, choice d would display the
 * programmer's job title. A sample run may look something like the following:
 * 
 *      Benevolent Order of Programmers Report
 *      a. display by name      b. display by title
 *      c. display by bopname   d. display by preference
 *      Enter your choice: a
 *      Wimp Macho
 *      Raki Rhodes
 *      Celia Laiter
 *      Hoppy Hipman
 *      Pat Hand
 *      Next choice: d
 *      Wimp Macho
 *      Junior Programmer
 *      MIPS
 *      Analyst Trainee
 *      LOOPY
 *      Next choice: q
 *      Bye!
 *
 * Created on May 2, 2013, 2:08 PM
 */

#include <iostream>

using namespace std;

const int StrSize = 50;

enum displayPreference { fullname, title, bopname, preference, unknown };

struct bop {
    char fullname[StrSize];
    char title [StrSize];
    char bopname[StrSize];
    int preference;
};

/*
 * 
 */
int main(int argc, char** argv) {
    
    bop members[] = {
        {"Wimp Macho", "System Administrator", "ROOTY", 0},
        {"Raki Rhodes", "Junior Programmer", "NEWBY", 1},
        {"Celia Laiter", "Mainframe Master", "MIPS", 2},
        {"Hoppy Hipman", "Analyst Trainee", "CHOKE", 1},
        {"Pat Hand", "Master of Recursion", "LOOPY", 2}
    };
    
    char choice;
    
    cout << "Benevolent Order of Programmers Report\n";
    cout << "a. display by name         b. display by title\n";
    cout << "c. display by bopname      d. display by preference\n";
    cout << "q. quit\n";
    cout << "Enter your choice: ";
    cin >> choice;
    
    while (choice != 'q') {
        displayPreference dispPref;
        
        switch (choice) {
            case 'a':
                dispPref = fullname;
                break;
            case 'b':
                dispPref = title;
                break;
            case 'c':
                dispPref = bopname;
                break;
            case 'd':
                dispPref = preference;
                break;
            default:
                dispPref = unknown;
                cout << "Invalid option\n";
                break;
        }
        
        if (dispPref != unknown) {
        for (int i = 0; i < 5; i++) {
            switch(dispPref) {
                case fullname:
                    cout << members[i].fullname << endl;
                    break;
                case title:
                    cout << members[i].title << endl;
                    break;
                case bopname:
                    cout << members[i].bopname << endl;
                    break;
                case preference:
                    if (members[i].preference == fullname) {
                        cout << members[i].fullname << endl;
                    } else if (members[i].preference == title) {
                        cout << members[i].title << endl;
                    } else if (members[i].preference == bopname) {
                        cout << members[i].bopname << endl;
                    } else {
                        cout << members[i].fullname << endl;
                    }
            }
        }
        }
        
        cout << "Next choice: ";
        cin >> choice;
    }
    
    cout << "Bye!\n";

    return 0;
}

