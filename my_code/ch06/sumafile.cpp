// sumafile.cpp -- functions with array argument
#include <iostream>
#include <fstream>
#include <cstdlib>

const int SIZE = 60;

int main()
{
    using namespace std;

    char filename[SIZE];
    ifstream infile;

    cout << "Enter name of data file: ";
    cin.getline(filename, SIZE);
    infile.open(filename);
    if (!infile.is_open()) {
        cout << "Could not open the file " << filename << endl;
        cout << "Program terminating.\n";
        exit(EXIT_FAILURE);
    }
    
    double value;
    double sum = 0.0;
    int count = 0;

    infile >> value;
    while (infile.good()) {
        ++count;
        sum += value;
        infile >> value;
    }

    if (infile.eof())
        cout << "End of file reached.\n";
    else if (infile.fail()) 
        cout << "Input terminated by data mismatch.\n";
    else
        cout << "Input terminated for unknown reason.\n";

    if (count == 0)
        cout << "No data processed.\n";
    else {
        cout << "Items read: " << count << endl;
        cout << "Sum: " << sum << endl;
        cout << "Average: " << sum / count << endl;
    }

    infile.close();

    return 0;
}
