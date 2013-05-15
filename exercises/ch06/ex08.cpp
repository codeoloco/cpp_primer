/*****************************************************************************
 * ex08.cpp - chapter 6 exercise 8
 *
 * Write a program that opens a text file, reads it character-by-character
 * to the end of the file, and reports the number of characters in the file.
 *
 ****************************************************************************/
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

int main() {

    using namespace std;

    string filename;
    ifstream fin;

    cout << "Please enter a file name: ";
    cin >> filename;

    fin.open(filename);
    if (!fin.is_open()) {
        cout << "Could not open file " << filename << endl;
        cout << "Program terminating.\n";
        exit(EXIT_FAILURE);
    }

    char dummy;
    int count = 0;

    fin >> dummy;
    while (fin.good()) {
        count++;
        fin >> dummy;
    }

    fin.close();

    cout << "File contains " << count << " characters.\n";

    return 0;
}
