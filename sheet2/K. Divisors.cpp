#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int mx = 0;
    for (int i = 1; i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            if (mx < i)
            {
                mx = i;
            }
        }
    }
    cout << mx;

    return 0;
}