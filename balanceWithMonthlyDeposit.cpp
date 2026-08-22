/*This function calculates the amount of money in the investment account
* at the end of each year and includes monthly deposits. The interest is
* compounded monthly and should adjust according to the monthly deposit.
*/


#include <cstdio>
#include <iostream>
#include "printDetails.h"
using namespace std;

double balanceWithMonthlyDeposit(double initialInvestment, double monthlyDeposit, double interestRate, int numberOfYears){
    const double YEARLYINTEREST = interestRate / 100.0;
    const double MONTHLYINTEREST = YEARLYINTEREST / 12.0;
    double monthlyInterest;
    double balance = initialInvestment;

    cout << "   Balance and Interest With Additional Monthly Deposits" << endl;
    cout << string(64, '=') << endl;
    cout << "  Year" << string(8, ' ') << " Year End Balance" << string(5, ' ') << " Year End Earned Interest" << endl;
    cout << string(64, '-') << endl;

    // Loops for every year input by user starting at year 1.
    for (size_t i = 1; i <= numberOfYears; ++i) {
    double yearlyInterest = 0.0;
    /* Loops 12 times for every year. This also adds the monthly deposit user
    * specifies and adds interest to the deposits.
    */
    for (size_t j = 1; j <= 12; ++j) {
      monthlyInterest= MONTHLYINTEREST * balance;
      yearlyInterest += monthlyInterest;
      balance += monthlyInterest + monthlyDeposit;
    }
    // Calls printDetails() function and prints balance for each year.
    printDetails(i, balance, yearlyInterest);
}
    // return the ending balance
    return balance;
}