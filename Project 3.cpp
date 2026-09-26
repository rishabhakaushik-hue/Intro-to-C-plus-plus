#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() 
{
    // Named constant for monthly payment frequency
    const int PAYMENTS_PER_YEAR = 12;

    // Declare variables to store user input
    double principal = 0.0;
    double annualInterestRate = 0.0;
    int years = 0;

    // Prompt user for required loan inputs
    cout << "Enter loan amount: ";
    cin >> principal;

    cout << "Enter annual interest rate: ";
    cin >> annualInterestRate;

    cout << "Enter term in years: ";
    cin >> years;

    // Convert interest rate and compute total number of payments
    double decimalRate = annualInterestRate / 100.0;
    double monthlyRate = decimalRate / PAYMENTS_PER_YEAR;
    int numPayments = years * PAYMENTS_PER_YEAR;

    // Calculate monthly payment using loan amortization formula
    double ratePower = pow(1.0 + monthlyRate, numPayments);
    double monthlyPayment = (principal * monthlyRate * ratePower) / 
                           (ratePower - 1.0);

    // Calculate overall repayment totals and interest accrued
    double amountPaidBack = monthlyPayment * numPayments;
    double interestPaid = amountPaidBack - principal;

    // Output formatted financial report with two decimal places
    cout << fixed << setprecision(2);
    cout << endl;
    cout << left << setw(24) << "Loan Amount:" 
         << "$ " << right << setw(11) << principal << endl;
    cout << left << setw(32) << "Annual Interest Rate:" 
         << right << setw(1) << annualInterestRate << endl;
    cout << left << setw(32) << "Number of Payments:" 
         << right << setw(1) << numPayments << endl;
    cout << left << setw(24) << "Monthly Payment:" 
         << "$ " << right << setw(11) << monthlyPayment << endl;
    cout << left << setw(24) << "Amount Paid Back:" 
         << "$ " << right << setw(11) << amountPaidBack << endl;
    cout << left << setw(24) << "Interest Paid:" 
         << "$ " << right << setw(11) << interestPaid << endl;

    return 0;
}