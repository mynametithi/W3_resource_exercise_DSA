// Write a C++ program that calculates the volume of a cube:
#include <iostream>
using namespace std;
int main()
{
    int rad;
    cout << "Enter your radious value:" << endl;
    cin >> rad;
    int VolofCube = rad * rad * rad;
    cout << "Volume of Cube=" << VolofCube;
    return 0;
}