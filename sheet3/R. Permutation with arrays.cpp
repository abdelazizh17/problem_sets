#include <iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;
    int arr1[n];
    int arr2[n];

    for (int i = 0; i < n; i++)
        cin >> arr1[i];
    for (int i = 0; i < n; i++)
        cin >> arr2[i];

    bool isPermutation = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr1[i] == arr2[j])
            {
                arr2[j] = 0;
                isPermutation = true;
                break;
            }
            else
                isPermutation = false;
        }
        if (!isPermutation)
            break;
    }

    if (isPermutation)
        cout << "yes" << "\n";
    else
        cout << "no" << "\n";

    return 0;
}