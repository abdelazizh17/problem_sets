#include <iostream>

using namespace std;

int main()
{

    int d, y, m, n;

    cin >> n; // 400

    y = n / 365; //  1
    n %= 365;    // 35
    m = n / 30;  // 1
    d = n % 30;  // 5

    cout << y << " years\n"
         << m << " months\n"
         << d << " days";

    return 0;
}