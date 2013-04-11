// ex03.cpp
#include <iostream>
#include <cstring>

int main()
{
    using namespace std;

    const int NameLength = 30;
    const int FullNameLength = NameLength * 2;

    char firstName[NameLength];
    char lastName[NameLength];
    char fullName[FullNameLength];

    cout << "Enter your first name: ";
    cin.getline(firstName, NameLength);
    cout << "Enter your last name: ";
    cin.getline(lastName, NameLength);

    strcpy(fullName, lastName);
    strcat(fullName, ", ");
    strcat(fullName, firstName);

    cout << "Here's the information in a single string: " << fullName << endl;

    return 0;
}
