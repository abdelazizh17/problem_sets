#include <iostream>
using namespace std;

int main()
{

    int n, x;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cin >> x;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            cout << i << endl;
            flag = true;
            break;
        }
    }
    if (flag == false)
    {
        cout << -1;
    }

    return 0;
}