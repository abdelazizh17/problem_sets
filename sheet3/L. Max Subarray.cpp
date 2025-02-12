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

        for (int i = 0; i < n; i++)
        {

            cout << arr[i] << " ";
            int max_valu = arr[i];
            for (int j = i + 1; j < n; j++)
            {
                max_valu = max(max_valu, arr[j]);
                cout << max_valu << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}
