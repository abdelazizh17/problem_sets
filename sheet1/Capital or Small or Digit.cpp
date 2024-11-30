#include <iostream>
using namespace std;

int main()
{

    char x;
    cin >> x;

    (x >= '0' && x <= '9') ? cout << "IS DIGIT" : (x >= 'A' && x <= 'Z') ? cout << "ALPHA\nIS CAPITAL"
                                              : (x >= 'a' && x <= 'z')   ? cout << "ALPHA\nIS SMALL"
                                                                         : cout << "UNKNOWN CHARACTER";
}