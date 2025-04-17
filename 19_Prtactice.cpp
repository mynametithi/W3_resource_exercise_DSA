// Write a C++ program to convert temperature in Celsius to Fahrenheit:
#include <iostream>
using namespace std;
int main()
{
    float degC, degF;
    cout << "Enter the temperature in celcious:";
    cin >> degC;
    degF = ((9 * degC) + (32 * 5)) / 5;
    cout << "Temperature in Celcious scale:" << degC;
    cout << "Temperature in Farenhite scale:" << degF;
    return 0;
}