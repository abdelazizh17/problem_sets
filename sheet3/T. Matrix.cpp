#include <iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;
    int arr[n][n];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];

    int main_diagonal = 0;
    int i = 0, j = 0;
    while (i < n && j < n)
    {
        main_diagonal += arr[i++][j++];
    }

    int secondary_diagonal = 0;
    i = 0, j = n - 1;
    while (i < n && j >= 0)
    {
        secondary_diagonal += arr[i++][j--];
    }

    int sum_of_two_diagonal = abs(main_diagonal - secondary_diagonal);

    cout << sum_of_two_diagonal << "\n";

    return 0;
}