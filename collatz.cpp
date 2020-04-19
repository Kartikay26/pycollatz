int collatz(int n)
{
    int c = 0;
    long long int x = n;
    while (x != 1)
    {
        if (x % 2 == 0)
        {
            x = x / 2;
        }
        else
        {
            x = 3 * x + 1;
        }
        c++;
    }
    return c;
}