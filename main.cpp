#include <iostream>
using namespace std;

#include "collatz.h"

int main()
{
    int ans = 0;
    for (int i = 0; i < 1000000; i++)
    {
        ans += collatz(i);
    }
    cout << ans << endl;
}