#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int arr[n + 1];

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    int lowest_num = INT_MAX, pos = -1;
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] < lowest_num)
        {
            lowest_num = arr[i];
            pos = i;
        }
    }

    cout << lowest_num << " " << pos << "\n";

    return 0;
}