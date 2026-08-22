/* Function for calculating expected yearly interest. Takes input from
* user for initialInvestment, interestRate, and numberOfYears and calculates
* the end of year balance through monthly compound on the initial investment.
*/

#include "balanceWithoutMonthlyDeposit.h"
#include "printDetails.h"
#include <cstddef>
#include <iostream>
using namespace std;

double balanceWithoutMonthlyDeposit(double initialInvestment, double interestRate, int numberOfYears) {
  const double YEARLYINTEREST = interestRate / 100.0;
  const double MONTHLYINTEREST = YEARLYINTEREST / 12.0;
  double monthlyInterest;
  double balance = initialInvestment;

  cout << "   Balance and Interest Without Additional Monthly Deposits" << endl;
  cout << string(64, '=') << endl;
  cout << "  Year" << string(8, ' ') << " Year End Balance" << string(5, ' ') << " Year End Earned Interest" << endl;
  cout << string(64, '-') << endl;
  // Loops based on how many years user entered.
  for (size_t i = 1; i <= numberOfYears; ++i) {
    double yearlyInterest = 0.0;
    // Monthly interest is calculated and will add the amount of interest
    // earned per month to the total balance. This will loop 12 times for
    // every year user enters.
    for (size_t j = 1; j <= 12; ++j) {
      monthlyInterest = MONTHLYINTEREST * balance;
      yearlyInterest += monthlyInterest;
      balance += monthlyInterest;
    }
    // Prints the year, current balance, and the interest earned for the year.
    printDetails(i, balance, yearlyInterest);
  }
  // Returns the total balance after all years have been calculated.
  return balance;
}