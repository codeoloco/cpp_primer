/*
 * ex01.cpp
 *
 *  Created on: May 1, 2013
 *      Author: jclements
 *
 *  Write a program that requests the user to enter two integers. The program
 *  should then calculate and report the sum of all the integers between
 *  and including the two integers. At this point, assume that the smaller
 *  integer is entered first. For example, if the user enters 2 and 9, the
 *  program should report that the sum of all the integers from 2 through 9
 *  is 44.
 */
#include <iostream>

int main()
{
	using namespace std;

	int num1 = 0;
	int num2 = 0;

	cout << "Please enter an integer: ";
	cin >> num1;
	cout << "Please enter another integer: ";
	cin >> num2;

	int total = 0;
	for (;num1 <= num2; num1++) {
		total += num1;
	}

	cout << "Total: " << total << endl;
}




