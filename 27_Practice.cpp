// Write a C++ program to compute the quotient and remainder:
#include <iostream> // Including input-output stream header file

using namespace std; // Using the standard namespace

int main() // Start of the main function
{
    int dividend, divisor, quotient, remainder; // Declaring integer variables for dividend, divisor, quotient, and remainder

    cout << "\n\n Compute quotient and remainder :\n"; // Outputting a message indicating the purpose of the program
    cout << "-------------------------------------\n"; // Outputting a separator line

    cout << " Input the dividend : "; // Prompting the user to input the dividend
    cin >> dividend;                  // Taking input for the dividend from the user

    cout << " Input the divisor : "; // Prompting the user to input the divisor
    cin >> divisor;                  // Taking input for the divisor from the user

    quotient = dividend / divisor;  // Calculating the quotient of the division
    remainder = dividend % divisor; // Calculating the remainder of the division

    cout << " The quotient of the division is : " << quotient << endl;   // Displaying the calculated quotient
    cout << " The remainder of the division is : " << remainder << endl; // Displaying the calculated remainder
    cout << endl;                                                        // Outputting a blank line for better readability

    return 0; // Returning 0 to indicate successful program execution
} // End of the main function
