// main.cpp
// Rishabh Kaushik
// 8/28/2026
// CMPR 120
// Exercise #1
// This program calculates and displays the sales total of 5 items.

#include <iostream>
using namespace std;
int main() {
double item1price = 15.95;
double item2price = 24.95;
double item3price = 6.95;
double item4price = 12.95;
double item5price = 3.95;
double TAX_RATE = 0.07; // 7% tax rate

// calculate the subtotal of the items
double subTotal = item1price + item2price + item3price + item4price + item5price;

// calculate the tax
double tax = subTotal * TAX_RATE;

// calculate the total price
double total = subTotal + tax;

// display the results
cout << "Item 1	  " << item1price << endl;
cout << "Item 2	  " << item2price << endl;
cout << "Item 3	  " << item3price << endl;
cout << "Item 4	  " << item4price << endl;
cout << "Item 5	  " << item5price << endl;
cout << endl;
cout << "Subtotal  " << subTotal << endl;
cout << "Tax	  " << tax << endl;
cout << "Total	  " << total << endl;
return 0;
}
