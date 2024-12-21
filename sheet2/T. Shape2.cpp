#include <iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;
    int e = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = n - 1; j >= i; j--)
        {
            cout << " ";
        }
        for (int k = 0; k < e; k++)
        {
            cout << "*";
        }
        cout << "\n";
        e += 2;
    }
    e -= 2;
    for (int i = 1; i <= n; i++)
    {

        for (int k = e; k >= 1; k--)
        {
            cout << "*";
        }
        cout << "\n";
        e -= 2;
        for (int j = i; j >= 1; j--)
        {
            cout << " ";
        }
    }

    return 0;
}