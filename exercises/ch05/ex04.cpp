/*
 * ex04.cpp
 *
 * Daphne invests $100 at 10% simple interest. That is, every year, the 
 * investment earns 10% or the original investment, or $10 each and every
 * year.
 *
 *      interest = 0.10 * original balance
 *
 * At the same time, Cleo invests $100 at 5% compound interest. That is,
 * interest is 5% of the current balance, including previoud additions in
 * interest.
 *
 *      interest = 0.05 * current balance
 *
 * Cleo earns 5% of $100 the first year, giving her $105. The next year
 * she earns 5% of $105, or $5.25 and so on. Write a program that finds out
 * how many years it takes for the value of Cleo's investment to exceed
 * the value of Daphne's investment and then display the value of both
 * investments at that time.
 *
 */
#include <iostream>

const double SimpleRate = 0.08;
const double CompoundRate = 0.08;
const double InitialInvestment = 1000.0;

int main()
{
    double daphnesInvestment = InitialInvestment;
    double cleosInvestment = InitialInvestment;
    int year = 0;

    while(cleosInvestment <= daphnesInvestment) {
        daphnesInvestment += InitialInvestment * SimpleRate;
        cleosInvestment += cleosInvestment * CompoundRate;
        year++;
    }

    std::cout << "Year : " << year << std::endl;
    std::cout << "Cleo's Investment : " << cleosInvestment << std::endl;
    std::cout << "Daphne's Investment : " << daphnesInvestment << std::endl;

    return 0;
}
