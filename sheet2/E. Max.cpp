#include <iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;

    int arr[n];
    int mn = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        mn = max(mn, arr[i]);
    }
    cout << mn;

    return 0;
}