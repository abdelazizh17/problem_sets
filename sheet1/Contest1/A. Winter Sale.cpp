#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    double d, p;
    cin >> d >> p;

    cout << fixed << setprecision(2) << p / (1 - d / 100);

    return 0;
}