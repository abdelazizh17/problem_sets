#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    double n;
    cin >> n;
    int temp = n;
    for (int i = 1; i <= n; i++)
    {
        if (i != ceil(n/2))
        {
            for (int j = 1; j <= n; j++)
            {
                if (j == i)
                    cout << "\\";
                else if (j == temp)
                {
                    cout << "/";
                    temp--;
                }
                else
                {
                    cout << "*";
                }
            }
        }
        else
        {
            for (int j = 1; j <= n; j++)
            {
                if (j != ceil(n/2))
                    cout << "*";
                else
                    cout << "X";
            }
            temp--;
        }
        cout << "\n";
    }

    return 0;
}