#include <bits/stdc++.h>
#include <map>
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    map<int, int> frequency;
    int min_valu = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        min_valu = min(min_valu, arr[i]);
        frequency[arr[i]]++;
    }

    if (frequency[min_valu] % 2 != 0)
        cout << "Lucky" << "\n";
    else
        cout << "Unlucky" << "\n";
    return 0;
}