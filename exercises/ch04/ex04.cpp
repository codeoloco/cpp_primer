// ex04.cpp
#include <iostream>
#include <string>

int main()
{
    using namespace std;

    string firstName, lastName, fullName;

    cout << "Enter your first name: ";
    getline(cin, firstName);
    cout << "Enter your last name: ";
    getline(cin, lastName);

    fullName = lastName + ", " + firstName;

    cout << "Here's the informarion in a single string: " << fullName << endl;

    return 0;
}
