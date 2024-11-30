#include <iostream>
#include <limits.h>
using namespace std;

int main()
{

    double n, k, a;
    cin >> n >> k >> a;
    long long resLongLong = (n * k / a);
    double resDouble = (n * k / a), dif = resDouble - resLongLong;

    if (dif > 0)
    {
        cout << "double";
    }
    else if (resLongLong > INT_MAX)
    {
        cout << "long long";
    }
    else
    {
        cout << "int";
    }

    return 0;
}