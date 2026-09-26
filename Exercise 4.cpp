//main.cpp
// Rishabh Kaushik
// 9/20/2026
// CMPR 120 #82210
// Exercise #4
// Fast Freight Shipping Company Rate Calculator
// Calculates shipping charges based on package weight and distance.

#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
    // Declare variables
    double weight = 0.0;
    double distance = 0.0;
    double shippingCharge = 0.0;

    // Prompt user for package weight
    cout << "Enter the weight of the package in kilograms (max 20 Kg): ";
    cin >> weight;

    // Input validation for weight
    if (cin.fail() || weight <= 0 || weight > 20) {
        cout << "Invalid weight. Weight must be greater than 0 kg and no more than 20 kg." << endl;
        return 1;
    }
    cin.ignore(99, '\n');

    // Prompt user for shipping distance
    cout << "Enter the distance the package is to be shipped (min 10 Mi, max 3000 Mi): ";
    cin >> distance;

    // Input validation for distance
    if (cin.fail() || distance < 10 || distance > 3000) {
        cout << "Invalid distance. Distance must be between 10 and 3,000 miles." << endl;
        return 1;
    }
    cin.ignore(99, '\n');

    // Calculate shipping charge based on weight tier
    double rate = 0.0;

    if (weight <= 2.0) {
        rate = 1.10;
    } else if (weight <= 6.0) {
        rate = 2.20;
    } else if (weight <= 10.0) {
        rate = 3.70;
    } else if (weight <= 20.0) {
        rate = 4.80;
    }

    // Formula accounts for base rate plus additional 500-mile increments
    shippingCharge = rate + (int((distance - 1) / 500) * rate);

    // Display the result formatted to 2 decimal places
    cout << fixed << showpoint << setprecision(2);
    cout << "The shipping charge is $" << shippingCharge << endl;

    return 0;
}