#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int pNum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            pNum++;
        }
    }
    (pNum == 2) ? cout << "YES" : cout << "NO";

    return 0;
}