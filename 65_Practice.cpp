// Write a program in C++ to calculate the sum of the series (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)
#include <iostream> // Including the input/output stream header file

using namespace std; // Using the standard namespace to avoid writing std::

int main() // Start of the main function
{
    int i, n, sum = 0; // Declaration of integer variables 'i', 'n', and 'sum'

    // Display a message to find the sum of the series (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)
    cout << "\n\n Find the sum of the series (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n):\n";
    cout << "------------------------------------------------------------------------------------\n";

    // Prompt the user to input the value for the nth term of the series
    cout << " Input the value for nth term: ";
    cin >> n; // Read the value entered by the user

    for (i = 1; i <= n; i++) // Loop to calculate each term of the series
    {
        sum += i * i;                                    // Calculate the square of 'i' and add it to the sum
        cout << i << "*" << i << " = " << i * i << endl; // Display the current term as i*i
    }

    // Display the total sum of the series
    cout << " The sum of the above series is: " << sum << endl;

    return 0; // Indicating successful completion of the program
}
