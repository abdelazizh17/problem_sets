#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long arr[n];
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << abs(sum) << "\n";
    return 0;
}