#include <iostream>
using namespace std;

int main()
{
    int a, b;
    string s;
    cin >> a >> b >> s;

    int sizeOfS = s.size();
    string checkCode = "Yes";

    if (a + b + 1 != sizeOfS)
        checkCode = "No";

    if (s[a] != '-')
        checkCode = "No";

    for (int i = 0; i < sizeOfS; i++)
    {
        if (i != a && !isdigit(s[i])) 
            checkCode = "No";
    }

    cout << checkCode;
}
