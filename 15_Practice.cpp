// Write a C++ program to find the area of any triangle using Heron's formula:
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float side1, side2, side3, area, s;
    cout << "Enter the side of first value of triangle:";
    cin >> side1;
    cout << "Enter the side of second value of triangle:";
    cin >> side2;
    cout << "Enter the side of third value of triangle:";
    cin >> side3;
    s = (side1 + side2 + side3) / 2;
    area = sqrt(s * (s - side1) * (s - side2) * (s - side3));
    cout << "The area of this triangle:" << area << endl;
    return 0;
}
