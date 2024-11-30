#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int pNum = 0;
    int lastDigit = 0;
    int temp = n;
    while (n != 0)
    {

        lastDigit = n % 10;
        pNum = pNum * 10 + lastDigit;
        n /= 10;
    }
    cout << pNum << "\n";
    if (pNum == temp)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}