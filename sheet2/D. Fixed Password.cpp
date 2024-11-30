#include <iostream>

using namespace std;

int main()
{

    int password;

    while (true)
    {
        cin >> password;
        if (password == 1999)
        {
            cout << "Correct";
            break;
        }
        else
        {
            cout << "Wrong" << "\n";
        }
    }

    return 0;
}