#include <iostream>
using namespace std;

bool isLucky(int num)
{
    while (num != 0)
    {
        int digit = num % 10;
        if (digit != 4 && digit != 7)
        {
            return false;
        }
        num /= 10;
    }
    return true;
}

int main()
{
    int a, b;
    cin >> a >> b;
    bool notLucky = true;

    for (int i = a; i <= b; i++)
    {
        if (isLucky(i))
        {
            cout << i << " ";
            notLucky = false;
        }
    }

    if (notLucky)
    {
        cout << -1;
    }

    return 0;
}