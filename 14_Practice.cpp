// Write a C++ program to find the Area and Perimeter of a Rectangle:
#include <iostream>
using namespace std;
int main()
{
    int width, length;
    cout << "Enter the length of  rectangle:" << endl;
    cin >> length;
    cout << "Enter the width of  rectangle:" << endl;
    cin >> width;
    int area = width * length;
    cout << "The area of this rectangle: " << area << endl;
    int peremeter = 2 * (width + length);
    cout << "Peremeter of this rectangle:" << peremeter << endl;
    return 0;
}