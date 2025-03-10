#include <iostream>
#include <climits> 

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        long long smallestRes = LLONG_MAX;

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                long long sum = arr[i] + arr[j] + (j - i);
                smallestRes = min(smallestRes, sum);
            }
        }

        cout << smallestRes << '\n';
    }

    return 0;
}
