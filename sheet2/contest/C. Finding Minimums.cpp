#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int c = 0;
    for (int i = 0; i < n / k; i++)
    {
        cout << *min_element(arr + c, arr + k + c) << " ";
        c = c + k;
    }
    if (n % k != 0)
    {
        cout << *min_element(arr + c, arr + n) << " ";
    }

    return 0;
}