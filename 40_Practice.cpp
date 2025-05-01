// Write a C++ program to print the area and perimeter of a rectangle:
#include <iostream>
using namespace std;
int main()
{
    float width, height, area, perimeter;
    cout << "Sample output:\n";
    cout << "Print the area and perimeter of a rectangle:\n";
    cout << "--------------------------------------------";
    cout << "input the width of the rectangle:\n";
    cin >> width;
    cout << "Input the height of the rectangle: \n";
    cin >> height;
    cout << "The area of the rectangle:\n";
    area = height * width;
    cout << area << "\n";
    perimeter = 2 * (height + width);
    cout << "The perimeter of the rectangle:" << perimeter;
    return 0;
}