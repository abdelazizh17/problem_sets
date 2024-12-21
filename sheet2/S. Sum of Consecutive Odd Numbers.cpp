#include <iostream>

using namespace std;
int sequenceOfNumberAndSum(int n, int m)
{
    int temp = 0;
    if (n > m)
    {
        swap(n, m);
    }

    for (int i = n + 1; i < m; i++)
    {
        if (i % 2 != 0)
        {
            temp += i;
        }
    }
    return temp;
}
int main()
{

    int t, n, m;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;

        cout << sequenceOfNumberAndSum(n, m) << "\n";
    }

    return 0;
}