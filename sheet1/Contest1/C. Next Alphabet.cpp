#include <iostream>
using namespace std;

int main()
{

    char alphabet;
    cin >> alphabet;
    if (alphabet == 'z')
    {
        cout << 'a';
    }
    else
    {

        cout << ++alphabet;
    }
    return 0;
}