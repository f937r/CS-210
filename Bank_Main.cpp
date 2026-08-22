/*
* Kyle Laffoon
* CS 210
* Project Two - Banking App
*/

#include "balanceWithoutMonthlyDeposit.h"
#include "balanceWithMonthlyDeposit.h"
#include "displayBlankMenu.h"
#include "userInputMenu.h"
#include <iostream>
using namespace std;

int main() {
    // Variables for use in passing to other functions
    double investment;
    double deposit;
    double interest;
    int years;
    char keyInput = ' ';

    displayBlankMenu();

    while (keyInput != 'q') {

    // Pauses and waits for 'Enter' keypress before going forward.
        cin.get();

    // Calls userInputMenu and passes the values obtained into the specified variables
        userInputMenu(investment, deposit, interest, years);

        cin.get();

        balanceWithoutMonthlyDeposit(investment, interest, years);

        cout << endl;

        balanceWithMonthlyDeposit(investment, deposit, interest, years);
    
        cout << endl << "Type 'q' to quit, or any other key to continue." << endl << endl << endl;
        cin >> keyInput;
        cout << "\n\n\n";
    }

    return 0;
}