#include <iostream>
using namespace std;

int main()
{

    int n, arr[200];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n / 2; i++)
    {
        int last = n - i - 1;
        int temp = arr[i];
        arr[i] = arr[last];
        arr[last] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}