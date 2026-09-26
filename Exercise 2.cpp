// main.cpp
// Rishabh Kaushik
// 8/28/2026
// CMPR 120
// Exercise #1
// This program calculates and displays the sales total of 5 items.

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
double item1price;
double item2price;
double item3price;
double item4price;
double item5price;
double TAX_RATE = 0.07; // 7% tax rate

// get the prices of the items from the user
cout << "Enter the price of item 1: ";
cin >> item1price;
cin.ignore(99, '\n');
cout << "Enter the price of item 2: ";
cin >> item2price;
cin.ignore(99, '\n');
cout << "Enter the price of item 3: ";
cin >> item3price;
cin.ignore(99, '\n');
cout << "Enter the price of item 4: ";
cin >> item4price;
cin.ignore(99, '\n');
cout << "Enter the price of item 5: ";
cin >> item5price;
cin.ignore(99, '\n');

// calculate the subtotal of the items
double subTotal = item1price + item2price + item3price + item4price + item5price;

// calculate the tax
double tax = subTotal * TAX_RATE;

// calculate the total price
double total = subTotal + tax;

// display the results
cout << setprecision(2) << showpoint << fixed;
cout << setw(10) << left << "Item 1" << " $" << setw(8) << right << item1price << endl;
cout << setw(10) << left << "Item 2" << " $" << setw(8) << right << item2price << endl;
cout << setw(10) << left << "Item 3" << " $" << setw(8) << right << item3price << endl;
cout << setw(10) << left << "Item 4" << " $" << setw(8) << right << item4price << endl;
cout << setw(10) << left << "Item 5" << " $" << setw(8) << right << item5price << endl;
cout << endl;
cout << setw(10) << left << "Subtotal" << " $" << setw(8) << right << subTotal << endl;
cout << setw(10) << left << "Tax(7.00%)" << " $" << setw(8) << right << tax << endl;
cout << setw(10) << left << "Total" << " $" << setw(8) << right << total << endl;
return 0;
}