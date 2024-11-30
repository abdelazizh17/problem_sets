#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    long long me, mo, k;
    cin >> me >> mo >> k;

    if (me % k == 0 && mo % k == 0)
    {
        cout << "Both";
    }
    else if (me % k == 0 && mo % k != 0)
    {
        cout << "Memo";
    }
    else if (me % k != 0 && mo % k == 0)
    {
        cout << "Momo";
    }
    else
    {
        cout << "No One";
    }

    return 0;
}