#include <iostream>
using namespace std;

int main()
{
    char s;
    int n;
    cin >> s >> n;
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        for (int j = 1; j <= arr[i]; j++)
        {
            cout << s;
        }
        cout << "\n";
    }

    return 0;
}