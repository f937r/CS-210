/* This menu is similar to the blank menu, but accepts user input. The values
* are passed by reference from the function back to the variables in the main
* program to utilize in the other functions. Once the user has entered their
* values, the function pauses and waits for a new key press before continuing.
*/

#include <iostream>
#include "userInputMenu.h"
using namespace std;

void userInputMenu(double &userInvestment, double &userMonthlyDeposit, double &userInterestRate, int &userNumberOfYears) {
    cout << string(34, '*') << endl;
    cout << string(10, '*') << " Data Input " << string(12, '*') << endl;
    
    cout << "Initial Investment Amount: ";
    cin >> userInvestment;

    cout << "Monthly Deposit: ";
    cin >> userMonthlyDeposit;

    cout << "Annual Interest: ";
    cin >> userInterestRate;

    cout << "Number of years: ";
    cin >> userNumberOfYears;

    cout << "Press Enter to continue . . ." << "\n\n\n";

    cin.get();
}