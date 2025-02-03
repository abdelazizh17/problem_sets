#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);
    int c = 1, res, repeatedNum;
    for (int i = 0; i < n; i++)
    {

        if (arr[i] == arr[i + 1])
        {
            c++;
        }
        else
        {
            if (c > res)
            {
                res = c;
                repeatedNum = arr[i];
            }
            c = 1;
        }
    }
    cout << repeatedNum << " repeated " << res;
    return 0;
}