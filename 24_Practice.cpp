// Write a program in C++ to convert temperature in Fahrenheit to Kelvin:
#include <iostream>
using namespace std;
int main()
{
    float FahT, KelT;
    cout << "Enter the value of temperature of Fahrenheit:";
    cin >> FahT;
    KelT = (FahT - 32) * 5 / 9 + 273.15;
    cout << "The value of temperature in Fahrenheit:" << FahT << "\n";
    cout << "The value of temperature in Kelvin:" << KelT << "\n";
    return 0;
}