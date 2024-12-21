#include <iostream>
using namespace std;
int main()
{

    long long n, x;
    cin >> n;
    long long mx = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        int c = 0;
        while (x != 0)
        {
            if (x % 2 == 0)
            {
                x /= 2;
                c++;
            }
            else
            {
                x = 0;
            }
        }
        if (mx < c)
        {
            mx = c;
        }
    }
    cout << mx;
}