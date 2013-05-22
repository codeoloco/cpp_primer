/*****************************************************************************
 *
 * ex06.cpp -- exercise 6 chapter 7
 *
 * Write a program that uses the following functions:
 *  
 *  Fill_array() - takes as arguments the name of an array of double values
 *      and an array size. It prompts to user to enter double values to be
 *      entered in the array. It ceases taking input when the array is 
 *      full or when the user enters non-numeric input, and it returns the
 *      actual number of entries.
 *  Show_array() - takes as arguments the name of an array of double values
 *      and an array size and displays the contents of the array.
 *  Reverse_array() - takes as arguments the name of an array of double values
 *      and an array size and reverses the order of the values stored in the
 *      array.
 *
 * The program should use these functions to fill an array, show the array,
 * reverse the array, show the array, reverse all but the first and last 
 * elements of the array, and then show the array.
 *
 */
#include <iostream>

const int kMaxArraySize = 10;

int Fill_array(double*, int);
void Show_array(const double*, int);
void Reverse_array(double*, int);

int main()
{

    double values[kMaxArraySize];

    int valsIn = Fill_array(values, kMaxArraySize);
    Show_array(values, valsIn);
    Reverse_array(values, valsIn);
    Show_array(values, valsIn);
    Reverse_array(&values[1], valsIn - 2);
    Show_array(values, valsIn);

    std::cout << "thank you\n";

    return 0;
}

int Fill_array(double * values, int maxValues)
{
    using namespace std;

    double value;
    int nVals = 0;

    cout << "Enter up to " << maxValues << " (q to quit)\n";
    while(nVals < maxValues && cin >> value) {
        values[nVals] = value;
        nVals++;
    }

    return nVals;
}

void Show_array(const double * values, int nVals)
{
    for (int i = 0; i < nVals; i++) {
        std::cout << values[i] << ' ';
    }
    std::cout << std::endl;
}

void Reverse_array(double* values, int nVals) 
{
    std::cout << "Reverse_array()\n";

    double * temp = new double[nVals];
    int i, j;

    for (i = nVals - 1, j = 0; i >= 0; i--, j++) {
        temp[j] = values[i];
    }

    for (i = 0; i < nVals; i++) {
        values[i] = temp[i];
    }

    delete[] temp;

}
