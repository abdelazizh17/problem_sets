#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int n, arr[200];
    int frequency[150 + 1] = {0};
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        frequency[arr[i]]++;
        // كدا انت بتعرف القيمة ع اساس انها انديكس ف الاراي التانية
    }

    int max_pos = -1;
    for (int i = 0; i < 151; i++)
    {
        if (max_pos == -1 || frequency[max_pos] < frequency[i]) // freq[0] < freq[1]
        {
            max_pos = i;
        }
    }
    cout << max_pos << " repeated " << frequency[max_pos] << " times";
    return 0;
}