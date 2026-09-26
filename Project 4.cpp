//main.cpp
// Rishabh Kaushik
// 9/24/2026
// CMPR 120 #82210
// Project #4
// Easter Day Calculator
// Calculates the date of Easter Sunday for a given year.

#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
    //Obtain the year
    int Year;
    cout << "Enter the year: ";
    cin >> Year;
    cin.ignore();
    if (Year < 1582)
    {
        cout << "Easter calculation is not valid for years before 1582." << endl;
        return 1;
    }
    
    //Declare Variables for the calculation and solve the calculation
    int A = Year % 19;
    int B = Year / 100;   
    int C = Year % 100;
    int D = B / 4;
    int E = B % 4;
    int F = C / 4;
    int G = C % 4;
    int H = (8 * B + 13) / 25;
    int J = (19 * A + B - D - H + 15) % 30;
    int M = (A + 11 * J) / 319;
    int K = (2 * E + 2 * F - G - J + M + 32) % 7;
    int Monthnumber = (J - M + K + 90) / 25;
    int Day = (J - M + K + 19 + Monthnumber) % 32;

    //Month and day validation
    if (Monthnumber != 3 && Monthnumber != 4)
    {
        cout << "Calculated month is invalid for Easter." << endl;
        return 1;
    }
    if (Monthnumber == 3)
    {
        if (Day < 22 || Day > 31)
        {
            cout << "Calculated day is invalid for March." << endl;
            return 1;
        }
    }
    if (Monthnumber == 4)
    {
        if (Day < 1 || Day > 25)
        {
            cout << "Calculated day is invalid for April." << endl;
            return 1;
        }
    }

    //Match the month number to the month name
    string Monthname;
    switch (Monthnumber) {
        case 1:
            Monthname = "January";
            break;
        case 2:
            Monthname = "February";
            break;
        case 3:
            Monthname = "March";
            break;
        case 4:
            Monthname = "April";
            break;
        case 5:
            Monthname = "May";
            break;
        case 6:
            Monthname = "June";
            break;
        case 7:
            Monthname = "July";
            break;
        case 8:
            Monthname = "August";
            break;
        case 9:
            Monthname = "September";
            break;
        case 10:
            Monthname = "October";
            break;
        case 11:
            Monthname = "November";
            break;
        case 12:
            Monthname = "December";
            break;
    }

    //Determine the suffix for the day (st, nd, rd, th)
    string suffix;
    if (Day % 10 == 1 && Day != 11){
        suffix = "st";
    }
    else if (Day % 10 == 2 && Day != 12){
        suffix = "nd";
    }
    else if (Day % 10 == 3 && Day != 13){
        suffix = "rd";
    }
    else{
        suffix = "th";
    }

    if (Year == 2026)
    {
        cout << "In " << Year << ", Easter Sunday is on ";
        cout << Monthname << " " << Day << suffix << endl;
    }
    else if (Year < 2026)
    {
        cout << "In " << Year << ", Easter Sunday was on ";
        cout << Monthname << " " << Day << suffix << endl;
    }
    else
    {
        cout << "In " << Year << ", Easter Sunday will be on ";
        cout << Monthname << " " << Day << suffix << endl;
    }
}