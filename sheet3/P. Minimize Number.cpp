#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    long long arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    bool flag = true;
    long long c = -1;
    while (flag)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 != 0)
            {
                flag = false;
                break;
            }
            else
            {
                arr[i] /= 2;
            }
        }
        c++;
    }
    cout << c;
    return 0;
}