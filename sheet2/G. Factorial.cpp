#include <iostream>

using namespace std;

int main()
{

    int numOfTestCases, num;
    cin >> numOfTestCases;
    long long fac = 1;
    while (numOfTestCases--)
    {

        cin >> num; // 5

        for (int i = 1; i <= num; i++)
        {
            fac *= i;
        }
        cout << fac << "\n";
        fac = 1;
    }

    return 0;
}