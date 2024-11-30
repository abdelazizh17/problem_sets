#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int pNum;
    for (int i = 2; i <= n; i++)
    {
        pNum = 0;
        for (int j = i; j > 0; j--)
        {
            if (i % j == 0)
            {
                pNum++;
            }
        }
        if (pNum == 2)
        {
            cout << i << " ";
        }
    }

    return 0;
}