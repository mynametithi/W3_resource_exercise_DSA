// Write a C++ program that displays mixed data types and arithmetic operations:
#include <iostream>
using namespace std;
int main()
{
    int m1, m2;
    cout << "Enter two numbers:";
    cin >> m1 >> m2;
    float a1, b2;
    cout << "Enter two numbers:";
    cin >> a1 >> b2;
    cout << m1 << "+" << m2 << "=" << m1 + m2 << endl;
    cout << a1 << "+" << b2 << "=" << a1 + b2 << endl;
    cout << m1 << "*" << m2 << "=" << m1 * m2 << endl;
    cout << a1 << "*" << b2 << "=" << a1 * b2 << endl;
    return 0;
}