// Write a C++ program to compute the distance between two points on the surface of the earth:
#include <iostream> // Including input-output stream header file
#include <math.h>   // Including math functions header file

using namespace std; // Using the standard namespace

int main()
{ // Start of the main function

    double d, la1, la2, lo1, lo2, er, r; // Declaration of variables to store coordinates, distance, and radius

    cout << "\n\n Print the distance between two points on the surface of earth:\n"; // Displaying the purpose of the program
    cout << "-----------------------------------------------------------------------\n";

    cout << " Input the latitude of coordinate 1: "; // Prompting user to input latitude of coordinate 1
    cin >> la1;                                      // Taking input from user and storing it in variable 'la1'

    cout << " Input the longitude of coordinate 1: "; // Prompting user to input longitude of coordinate 1
    cin >> lo1;                                       // Taking input from user and storing it in variable 'lo1'

    cout << " Input the latitude of coordinate 2: "; // Prompting user to input latitude of coordinate 2
    cin >> la2;                                      // Taking input from user and storing it in variable 'la2'

    cout << " Input the longitude of coordinate 2: "; // Prompting user to input longitude of coordinate 2
    cin >> lo2;                                       // Taking input from user and storing it in variable 'lo2'

    r = 0.01745327; // Conversion factor Pi/180

    // Converting latitude and longitude values from degrees to radians
    la1 = la1 * r;
    la2 = la2 * r;
    lo1 = lo1 * r;
    lo2 = lo2 * r;

    er = 6371.01; // Earth's radius in kilometers

    // Calculating the distance between two points on the Earth's surface using Haversine formula
    d = er * acos((sin(la1) * sin(la2)) + (cos(la1) * cos(la2) * cos(lo1 - lo2)));

    cout << " The distance between those points is: " << d << "\n"; // Displaying the calculated distance

    return 0; // Returning 0 to indicate successful program execution
}
