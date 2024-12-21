#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int fib1 = 0, fib2 = 1, fib;
    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            cout << fib1 << " ";
        }
        else if (i == 2)
        {
            cout << fib2 << " ";
        }
        else
        {
            fib = fib2 + fib1;
            cout << fib << " ";
            fib1 = fib2;
            fib2 = fib;
        }
    }

    return 0;
}