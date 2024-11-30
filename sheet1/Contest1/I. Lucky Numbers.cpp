#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int lsDigit = n % 10;
    int fsDigit = n / 10;
    if (n == 10)
    {
        cout << "No";
    }
    else if (lsDigit % fsDigit == 0 || fsDigit % lsDigit == 0)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    return 0;
}