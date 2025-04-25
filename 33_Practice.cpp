//Write a program in C++ to compute the specified expressions and print the output:
#include<iostream> 
#include<cmath> 
#include <ctime>

using namespace std;

int main() 
{
    time_t t = time(NULL);
    tm* tPtr = localtime(&t);  

    cout << "\n\n Display the Current Date and Time :\n"; // Outputting a message indicating the purpose of the program
    cout << "----------------------------------------\n"; // Outputting a separator line


    cout << " seconds = " << (tPtr->tm_sec) << endl; // Displaying seconds
    cout << " minutes = " << (tPtr->tm_min) << endl; // Displaying minutes
    cout << " hours = " << (tPtr->tm_hour) << endl; // Displaying hours
    cout << " day of month = " << (tPtr->tm_mday) << endl; // Displaying day of the month
    cout << " month of year = " << (tPtr->tm_mon)+1 << endl; // Displaying month of the year
    cout << " year = " << (tPtr->tm_year)+1900 << endl; // Displaying year
    cout << " weekday = " << (tPtr->tm_wday) << endl; // Displaying weekday
    cout << " day of year = " << (tPtr->tm_yday) << endl; // Displaying day of the year
    cout << " daylight savings = " << (tPtr->tm_isdst) << endl; // Displaying daylight savings

    cout << endl;

    
    cout << " Current Date: " <<(tPtr->tm_mday)<<"/"<< (tPtr->tm_mon)+1 <<"/"<< (tPtr->tm_year)+1900<< endl; 
    cout << " Current Time: " << (tPtr->tm_hour)<<":"<< (tPtr->tm_min)<<":"<< (tPtr->tm_sec) << endl; 

    cout << endl; 

    return 0;

}