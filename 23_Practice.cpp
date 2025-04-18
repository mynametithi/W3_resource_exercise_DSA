// Write a program. in C++ to convert temperature in Kelvin to Celsius:
#include <iostream>
using namespace std;
int main()
{
    float tempKel, tempCel;
    cout << "Enter the Temperature value of Kelvin:";
    cin >> tempKel;
    tempCel = tempKel - 273.15;
    cout << "The value of temperature in Kelvin:" << tempKel << "\n";
    cout << "The value of temperature in celcious:" << tempCel << "\n";
    return 0;
}