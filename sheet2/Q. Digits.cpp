#include <iostream>
using namespace std;

void digit(int num)
{
    while (num != 0)
    {
        int digit = num % 10;
        cout << digit << " ";
        num /= 10;
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        int temp = arr[i];
        digit(temp);
        cout << "\n";
    }

    return 0;
}