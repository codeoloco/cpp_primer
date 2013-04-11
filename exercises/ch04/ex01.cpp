// ex01.cpp
#include <iostream>

int main(int argc, char *argv[]) 
{
    using namespace std;

    const int NameSize = 31;
    char firstName[NameSize];
    char lastName[NameSize];
    char grade;
    int age;

    cout << "What is you first name? ";
    cin.getline(firstName, NameSize - 1);
    cout << "What is your last name? ";
    cin.getline(lastName, NameSize - 1);
    cout << "What letter grade to you deserve? ";
    cin >> grade;
    cout << "What is your age? ";
    cin >> age;

    grade++;

    cout << "Name: " << lastName << ", " << firstName << endl;
    cout << "Grade: " << grade << endl;
    cout << "Age: " << age << endl;

    return 0;
}
