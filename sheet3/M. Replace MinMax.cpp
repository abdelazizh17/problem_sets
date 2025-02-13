#include <iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int min_idx = 0, max_idx = 1;
    if (arr[min_idx] > arr[max_idx])
    {
        swap(min_idx, max_idx);
    }

    for (int i = 2; i < n; i++)
    {
        if (arr[min_idx] > arr[i])
            min_idx = i;
        else if (arr[max_idx] < arr[i])
            max_idx = i;
    }

    swap(arr[min_idx], arr[max_idx]);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}