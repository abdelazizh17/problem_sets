#include <iostream>

using namespace std;

int main()
{

    int arr[100][100];
    int rows, cols;
    cin >> rows >> cols;
    int sumLeftDiagonal = 0, sumRightDiagonal = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
            if (i == j)
            {
                sumLeftDiagonal += arr[i][j];
            }
            else if ((cols - 1 - j) == i)
            {
                sumRightDiagonal += arr[i][j];
            }
        }
    }

    int sumLastRow = 0, sumLastColumn = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = cols - 1; j < cols; j++)
        {
            sumLastColumn += arr[i][j];
        }
    }

    for (int i = rows - 1; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            sumLastRow += arr[i][j];
        }
    }
    cout << sumLeftDiagonal << " " << sumRightDiagonal << "\n"
         << sumLastRow << " " << sumLastColumn << "\n";

    return 0;
}