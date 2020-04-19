#include <iostream>
using namespace std;

#include "collatz.h"

int main()
{
    for (int i = 1; i <= 10000000; i++)
    {
        cout << i << ", " << collatz(i) << endl;
    }
}