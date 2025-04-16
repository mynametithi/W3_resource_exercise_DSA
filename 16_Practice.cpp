// Write a C++ program to find the third angle of a triangle:
#include <iostream>
using namespace std;
int main()
{
    float ang1, ang2, ang3, FinAng;
    FinAng = 180;
    cout << "Enter the angle of 1st angel:";
    cin >> ang1;
    cout << "Enter the angle of 2nd angel:";
    cin >> ang2;
    ang3 = FinAng - (ang1 + ang2);
    cout << "Third angel of the triangle:" << ang3;
    return 0;
}