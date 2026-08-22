// This is the blank menu so the user knows what to expect before
// program execution. A blank menu appears indicating that the user
// will need to supply their original investment, a monthly deposit
// the annual interest and how long they want to see the investment grow
// in years. Prompts to press enter before it continues.

#include <iostream>
#include "displayBlankMenu.h"
using namespace std;

void displayBlankMenu() {
    cout << string(34, '*') << endl;
    cout << string(10, '*') << " Data Input " << string(12, '*') << endl;
    cout << "Initial Investment Amount: " << endl;
    cout << "Monthly Deposit: " << endl;
    cout << "Annual Interest: " <<  endl;
    cout << "Number of years: " <<  endl;
    cout << "Press Enter to continue . . ." << endl;
    cout << "\n\n\n";
}