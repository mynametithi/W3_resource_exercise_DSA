// Write a C++ program to enter P, T, R and calculate compound interest:
#include <iostream> // Including input-output stream header file
#include <math.h>   // Including math functions header file

using namespace std; // Using the standard namespace

int main()
{ // Start of the main function

    float p, r, t, cp, ci; // Declaring variables to store principle, rate, time, compound interest, and compound amount

    cout << "\n\n Calculate the Compound Interest :\n"; // Displaying the purpose of the program
    cout << " -------------------------------------\n";

    cout << " Input the Principle: "; // Prompting the user to input the principle amount
    cin >> p;                         // Taking input of the principle amount from the user

    cout << " Input the Rate of Interest: "; // Prompting the user to input the rate of interest
    cin >> r;                                // Taking input of the rate of interest from the user

    cout << " Input the Time: "; // Prompting the user to input the time period
    cin >> t;                    // Taking input of the time period from the user

    ci = p * pow((1 + r / 100), t) - p; // Calculating the compound interest using the formula: P(1 + r/n)^nt - P
    cp = p * pow((1 + r / 100), t);     // Calculating the compound amount

    cout << " The Interest after compounded for the amount " << p << " for " << t << " years @ " << r << " % is: " << ci; // Displaying the calculated compound interest
    cout << endl;                                                                                                         // Displaying an empty line for better readability

    cout << " The total amount after compounded for the amount " << p << " for " << t << " years @ " << r << " % is: " << cp; // Displaying the calculated compound amount
    cout << endl;                                                                                                             // Displaying an empty line for better readability

    cout << endl; // Displaying an empty line for better readability
    return 0;     // Returning 0 to indicate successful program execution
}
