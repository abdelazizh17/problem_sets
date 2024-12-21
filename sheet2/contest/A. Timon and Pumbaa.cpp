#include <iostream>

using namespace std;

int main()
{

    long long a, b;
    cin >> a >> b;
    long long res = a - b;
    if (res >= 0)
        cout << res;    
    else
        cout << 0;

    return 0;
}