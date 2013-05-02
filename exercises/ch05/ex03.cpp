/* 
 * ex3.cpp
 *
 * Write a program that asks the user to type in numbers. After each entry,
 * the program should report the cumulative sum of the entries to date. The
 * program should terminate when the user enters 0.
 *
 */
#include <iostream>

int main() 
{
    int total = 0.0;
    int num;

    std::cout << "Please enter a number: ";
    std::cin >> num;

    while (num) {
        total += num;
        std::cout << "Total: " << total << std::endl;

        std::cout << "Please enter a number: ";
        std::cin >> num;
    }

    return 0;
}
