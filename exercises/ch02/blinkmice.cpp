// blindmice.cpp - exercise 3
#include <iostream>

void printLine1();
void printLine2();

using namespace std;

int main() 
{
    printLine1();
    printLine1();
    printLine2();
    printLine2();

    return 0;
}

void printLine1() 
{
    cout << "Three blind mice" << endl;
}

void printLine2()
{
    cout << "See how they run" << endl;
}
