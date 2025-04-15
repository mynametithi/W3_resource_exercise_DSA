// Write a C++ program that calculates the volume of a sphere:
#include <iostream>

using namespace std;
int main()
{
    int radious;
    float sphere;
    float pi = 3.14;
    cout << "Enter Your radious value:";
    cin >> radious;
    sphere = (4 * pi * radious * radious * radious) / 3;
    cout << "The volume of sphere:" << sphere << endl;
    return 0;
}