// swaps -- swapping with references and pointers
#include <iostream>

void swapr(int & a, int & b);
void swapp(int * a, int * b);
void swapv(int a, int b);
void print_wallets(int w1, int w2);

int main()
{
	using namespace std;

	int wallet1 = 300;
	int wallet2 = 350;

	print_wallets(wallet1, wallet2);

	cout << "Using references to swap contents:\n";
	swapr(wallet1, wallet1);
	print_wallets(wallet1, wallet2);

	cout << "Using pointers to swap contents again:\n";
	swapp(&wallet1, &wallet2);
	print_wallets(wallet1, wallet2);

	cout << "Trying to us passing by value:\n";
	swapv(wallet1, wallet2);
	print_wallets(wallet1, wallet2);

	return 0;
}

void print_wallets(int w1, int w2)
{
	std::cout << "wallet1 = $" << w1 << " wallet2 = $" <<  w2 << std::endl;
}

