#include "DayOfYear.h"


void DayOfYear::readDate() 
{
    cout << "Enter the Month: ";
    cin >> month;
    cout << "Enter the Day: ";
    cin >> day;
    cout << "Enter the Month: ";
    cin >> year;
}

void DayOfYear::printDate() 
{
    cout << month << "/" << day << "/" << year << endl;
}