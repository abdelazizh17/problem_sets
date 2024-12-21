#include <iostream>
#include <cmath>

using namespace std;

bool isPerfectSquare(long long num)
{
    double root = sqrt(num);
    return root * root == num;
}

int main()
{
    long long n, x = 0, y;
    cin >> n;
    bool isSolved = false;

    while (x * x <= n)
    {
        y = n - x * x;
        if (isPerfectSquare(y))
        {
            cout << x << " " << sqrt<long long>(y);
            isSolved = true;
            break;
        }
        else
        {
            x++;
        }
    }
    if (isSolved == false)
    {
        cout << "No solutions";
    }
}
