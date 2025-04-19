// Write a program in C++ to convert temperature in Celsius to Kelvin:
#include <iostream>
using namespace std;
int main()
{
    float TempCel, TempKel;
    cout << "Enter the value of temperature in celcious:";
    cin >> TempCel;
    TempKel = TempCel + 273.15;
    cout << "The value in celcious:" << TempCel << "\n";
    cout << "The value in celcious:" << TempKel << "\n";
    return 0;
}