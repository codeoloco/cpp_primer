/*****************************************************************************
 * ex05.cpp -- exercise 5 chapter 7
 *
 * Define a recursive function that takes an integer argument and returns the
 * factorial of that argument. Recall that 2 factorial, written 3!, equals
 * 3 * 2!, and so on, with 0! defined as 1. Test your function in a program
 * that uses a loop to allow the user to enter various values for which 
 * the program report the factorial.
 *
 */
#include <iostream>

const char* kPrompt = "Please enter an integer (q to quit): ";

int fact(int);

int main() 
{
    int n;

    std::cout << kPrompt;
    while (std::cin >> n) 
    {
        std::cout << "The factorial of " << n << " is " << fact(n) << std::endl;
        std::cout << kPrompt;
    }
}

int fact(int n) 
{
    if (n == 0)
        return 1;
    else
        return n * fact(n - 1);
}
