// Write a program in C++ that converts kilometers per hour to miles per hour:
#include <iostream>
using namespace std;
int main()
{
    float kmph, miph;
    cout << "Convert kilometers per hour to miles per hour:\n";
    cout << "Enter Dinstance in kilometres:";
    cin >> kmph;
    miph = kmph * 0.62137119;
    cout << "In miles the distance:" << miph;
    return 0;
}