// Write a C++ program to find the area and circumference of a circle:
#include <iostream>
using namespace std;
int main()
{
    float pi = 3.14;
    int rad;
    cout << "Enter the value of radious of circle:";
    cin >> rad;
    float area = pi * rad * rad;
    cout << "The area of this circle:" << area;

    float circumference = 2 * pi * rad;
    cout << "\nThe circumference of this circle: " << circumference;
    return 0;
}