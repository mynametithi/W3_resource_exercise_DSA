// Write a C++ program that calculates the volume of a cylinder:
#include <iostream>
using namespace std;
int main()
{
    float height, rad, pi = 3.14, Volumn;
    cout << "Enter the value of rad:";
    cin >> rad;
    cout << "Enter the value of height:";
    cin >> height;
    Volumn = pi * rad * rad * height;
    cout << "The volume of a cylinder:" << Volumn;
}