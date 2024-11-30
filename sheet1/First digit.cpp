#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int firstDigit;
    int totalDigit = log10(num);            // 3
    firstDigit = num / pow(10, totalDigit); // 1000

    (firstDigit % 2 == 0) ? cout << "EVEN" : cout << "ODD";
    return 0;
}