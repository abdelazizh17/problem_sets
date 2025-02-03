#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{

    char ch1 = 'F';

    if ('A' <= ch1 && 'Z' >= ch1)
    {
        cout << ch1 << " : is upper case\n";
    }

    ch1 = ch1 - 'A' + 'a'; // convert upper char to lower char

    cout << ch1 << endl;
    //====================================================================================//
    string name1;
    getline(cin, name1); // with string

    cout << name1 << "\n";

    char name2[50];
    cin.getline(name2, 50); // with char of array

    cout << name2 << "\n";
    //====================================================================================//

    char name3[5]; // the right way should end with null char \0
    name3[0] = 'H';
    name3[1] = 'a';
    name3[2] = 'n';
    name3[3] = 'y';
    name3[4] = '\0';
    cout << name3 << '\n';
    return 0;
}