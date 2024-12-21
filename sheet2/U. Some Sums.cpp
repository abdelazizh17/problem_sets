#include <iostream>

using namespace std;
int someSums(int n, int a, int b)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        int temp = i, res = 0;
        while (temp != 0)
        {
            int lsDigit = temp % 10;
            res += lsDigit;
            temp /= 10;
        }
        if (res >= a && res <= b)
        {
            sum += i;
        }
    }
    return sum;
}
int main()
{

    int n, a, b;
    cin >> n >> a >> b;

    cout << someSums(n, a, b);

    return 0;
}