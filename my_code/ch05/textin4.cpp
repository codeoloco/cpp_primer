// textin4.cpp -- reading chars with cin.get()
#include <iostream>
#include <cstdio>

int main(void)
{
    using namespace std;
    int ch;
    int count = 0;
    
    while ((ch = cin.get()) != EOF) {
        cout.put(ch);
        ++count;
    }
    cout << endl << count << " characters read\n";
    return 0;
}