#include <iostream>

using namespace std;

int main()
{

    int n, counter = 0;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            counter++;
            cout << counter << " ";
        }
        cout << "PUM\n";
        counter++;
    }

    return 0;
}