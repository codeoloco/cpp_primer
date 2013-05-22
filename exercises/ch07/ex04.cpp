// ex04.cpp -- exercise 4 chapter 5
//
// Many state lotteries use a variation of the simple lottery portrayed in
// Listing 7.4. In these variations youc hoose several numbers from one set
// and call them field numbers. For example, you might select five numbers
// from the field of 1-47. You also pick a single number (called a mega 
// number or a power ball, etc.) from a second range, such as 1 - 27. To win
// the grand prize, you have to guess all the picks correctly. The chance of
// winning is the product of the probability of picking all the field
// numbers times the probability of picking the mega number. For instance,
// the probability of winning the example described here is the product
// of the probability of picking 5 out of 47 correctly times the probability
// of picking 1 out of 27 correctly. Modify Listing 7.4 to calculate the 
// probability of winning this kind of lottery.
//
#include <iostream>

long double probability(unsigned numbers, unsigned picks);

int main()
{
    using namespace std;

    cout << "the probability of winning powerball is : "
         << probability(47, 5) * probability(27, 1) << endl;

    cout << "thank you\n";
    return 0;
}

long double probability(unsigned numbers, unsigned picks)
{
    long double result = 1.0;
    long double n;
    unsigned p;

    for (n = numbers, p = picks; p > 0; n--, p--)
        result = result * n / p;
    return result;
}
