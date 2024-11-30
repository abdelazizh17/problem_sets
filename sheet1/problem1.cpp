#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    n %= 10;
    m %= 10;
    cout << n + m;
}