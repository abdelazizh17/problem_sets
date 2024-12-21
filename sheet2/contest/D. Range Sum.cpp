#include <iostream>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        long long l, r;
        cin >> l >> r;
        if (l > r)
        {
            swap(l, r);
        }
        long long lRes = l * (l + 1) / 2;
        long long rRes = r * (r + 1) / 2;
        long long res = (rRes - lRes) + l;
        cout << res << "\n";
    }

    return 0;
}