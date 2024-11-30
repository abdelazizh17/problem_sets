#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    long long e, m, b, res = 0;

    cin >> e >> m >> b;

    long long mn = min({e, m, b});
    res += mn;

    e -= mn;
    m -= mn;
    b -= mn;

    mn = min(e / 2, b);
    res += mn;
    cout << res;
    return 0;
}