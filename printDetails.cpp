/* This will display the current year, balance at the end of the year, and
* how much interest was earned for that year. The format is set to include
* '$' where appropriate and truncates the decimal to two places for valid
* money count.
*/

#include <iostream>
#include <iomanip>
using namespace std;


void printDetails(int year, double yearEndBalance, double interestEarned){
    cout << fixed << setprecision(2) << 

    // Formatting to keep things clean. Convert int/double to string and
    // subtract its length from given integer.
    string(6 - to_string(year).length(), ' ') << year 
    << string(28 - to_string(yearEndBalance).length(), ' ') 
    << "$" << yearEndBalance << string(33 - to_string(interestEarned).length(), ' ') 
    << "$" << interestEarned << endl << endl;
}