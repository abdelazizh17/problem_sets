#include <iostream>

using namespace std;
void sequenceOfNumberAndSum(int n, int m)
{
    int temp = 0;
    if (n > m)
    {
        swap(n, m);
    }

    for (int i = n; i <= m; i++)
    {
        temp += i;
        cout << i << " ";
    }
    cout << "sum =" << temp << "\n";
}
int main()
{

    int n, m;

    while (true)
    {
        cin >> n >> m;

        if (n <= 0 || m <= 0)
        {
            return 0;
        }
        else
        {
            sequenceOfNumberAndSum(n, m);
        }
    }

    return 0;
}