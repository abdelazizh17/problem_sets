#include <iostream>
using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }
    int max_i = 0, max_j = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (arr[i][j] >= arr[max_i][max_j])
            {
                max_i = i,
                max_j = j;
            }
        }
    }
    cout << "Max value at position : " << max_i << "," << max_j << " with value = " << arr[max_i][max_j] << "\n";
}