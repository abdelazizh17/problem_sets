#include <iostream>
using namespace std;

int main()
{
    int row, column;
    cin >> row >> column; // 3,3
    for (int i = row - 1; i <= row + 1; i++)
    {
        for (int j = column - 1; j <= column + 1; j++)
        {
            cout << i << "  " << j << endl;
        }
    }
    return 0;
}

/*
======== Neighbours of 3,3 ============
2,2     2,3     2,4

3,2     3,3     3,4

4,2     4,3     4,4
*/
