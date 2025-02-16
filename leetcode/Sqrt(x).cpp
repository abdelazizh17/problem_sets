#include <iostream>
#include <cmath>
using namespace std;

int mySqrt(int x)
{
    if (x == 0 || x == 1)
        return x;

    int l = 1, h = x, mid = -1;

    while (l <= h)
    {
        mid = l + (h - l) / 2; // to solve overflow problem
        long long squre = (long long)mid * mid;
        if (squre > x)
            h = mid - 1;
        else if (squre == x)
            return mid;
        else
            l = mid + 1;
    }
    return h;
}

int main()
{
    int num = 8;
    int res = mySqrt(num);
    cout << res;
    return 0;
}