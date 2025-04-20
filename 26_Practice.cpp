// Write a C++ program to find the area of the Scalene Triangle:
#include <iostream> // Including the input-output stream header file
#include <math.h>   // Including the math library for mathematical functions
#define PI 3.14159  // Defining the value of PI as a constant

using namespace std; // Using the standard namespace

int main() // Start of the main function
{
    float side1, side2, ang1, area; // Declaring floating-point variables for sides, angle, and area

    cout << "\n\n Find the area of Scalene Triangle :\n"; // Outputting a message indicating the purpose of the program
    cout << "----------------------------------------\n"; // Outputting a separator line

    cout << " Input the length of a side of the triangle : "; // Prompting the user to input the length of one side of the triangle
    cin >> side1;                                             // Taking input for the length of one side from the user

    cout << " Input the length of another side of the triangle : "; // Prompting the user to input the length of another side of the triangle
    cin >> side2;                                                   // Taking input for the length of another side from the user

    cout << " Input the angle between these sides of the triangle : "; // Prompting the user to input the angle between the given sides
    cin >> ang1;                                                       // Taking input for the angle from the user

    // Calculating the area of the Scalene Triangle using the formula: (side1 * side2 * sin(angle))/2
    area = (side1 * side2 * sin((PI / 180) * ang1)) / 2;

    cout << " The area of the Scalene Triangle is : " << area << endl; // Displaying the calculated area of the triangle
    cout << endl;                                                      // Outputting a blank line for better readability

    return 0; // Returning 0 to indicate successful program execution
} // End of the main function
