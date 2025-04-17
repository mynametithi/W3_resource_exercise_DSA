// Write a C++ program to convert temperature in Fahrenheit to Celsius:
#include <iostream>
using namespace std;
int main()
{
    cout << "Convert temperature in Fahrenheit to Celsius:\n";
    int Fah, cel;
    cout << "Enter temperature value in fahrenheit:\n";
    cin >> Fah;
    cel = (5 * (Fah - 32)) / 9;
    cout << "Temperature in Fahrenheit:" << Fah;
    cout << "Temperature in Celsius:" << cel;
    return 0;
}