//Write a program in C++ to find the Greatest Common Divisor (GCD) of two numbers:
#include <iostream> // Preprocessor directive to include the input/output stream header file

using namespace std; // Using the standard namespace to avoid writing std::

int main() // Start of the main function
{
    int num1, num2, gcd; // Declaration of integer variables 'num1', 'num2', and 'gcd'

    // Display a message to find the Greatest Common Divisor (GCD) of two numbers
    cout << "\n\n Find the Greatest Common Divisor of two numbers:\n";
    cout << "-----------------------------------------------------\n";

    // Prompt the user to input the first number
    cout << " Input the first number: ";
    cin >> num1; // Reading the first number entered by the user

    // Prompt the user to input the second number
    cout << " Input the second number: ";
    cin >> num2; // Reading the second number entered by the user

    // Loop to find the Greatest Common Divisor (GCD) of num1 and num2
    for (int i = 1; i <= num1 && i <= num2; i++) 
    {
        if (num1 % i == 0 && num2 % i == 0) // Check if 'i' divides both num1 and num2 evenly
        {
            gcd = i; // Update the 'gcd' variable with the current common divisor
        }
    }

    // Display the Greatest Common Divisor (GCD) of the entered numbers
    cout << " The Greatest Common Divisor is: " << gcd << endl;

    return 0; // Indicating successful completion of the program
}
