#include <iostream>

using namespace std;

int main()
{

    int odd, even;
    cin >> odd >> even;
    if ((odd == 0 && even == 0) || abs(odd - even) >= 2)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
    return 0;
}
