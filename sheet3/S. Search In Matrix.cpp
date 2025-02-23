#include <iostream>
using namespace std;

int main()
{

    int rows, cols;
    cin >> rows >> cols;
    int arr[rows][cols];

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> arr[i][j];

    int x;
    cin >> x;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] == x)
            {
                cout << "will not take number";
                return 0;
            }
        }
    }

    cout << "will take number";
    return 0;
}