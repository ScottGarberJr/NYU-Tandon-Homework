#include <iostream>
using namespace std;

int printMonthCalender(int numOfDays, int startingDay);
bool isLeapYear(int year);
void printYearCalender(int year, int startingDay);
int main() {

    int year, startingDay;
    cout<< "Please enter the year for the calender: ";
    cin>> year;
    cout<< "Enter the day of the week (1 = Monday, 2 = Tuesday, etc) of January 1st that year: ";
    cin>> startingDay;

    printYearCalender(year, startingDay);
    return 0;
}
int printMonthCalender(int numOfDays, int startingDay) {
    int daySlot, dayCount = 1;
    cout << "Mon\tTue\tWed\tThu\tFri\tSat\tSun" << endl;
    for (int week = 1; dayCount <= numOfDays; week++){
        for (daySlot = 1; daySlot <= 7; daySlot++){
            if (week == 1 && daySlot < startingDay) {
                cout<< " \t";
            }
            else if (dayCount > numOfDays){
                cout<< " \t";
            }
            else {
                cout<< dayCount<< "\t";
                dayCount++;
            }
        }
        cout << endl;
    }
    return 1;
}

bool isLeapYear(int year){
    if ((year %4 == 0 && year %100 != 0) || (year %400 == 0)) {
        return true;
    }
    else return false;
}
void printYearCalender(int year, int startingDay){
    int numOfDays = 0;
    for (int month = 1; month <= 12; month++) {  // Month Loop
        startingDay = (startingDay + numOfDays) % 7;
        if (startingDay == 0) {
            startingDay = 7;
        }
        switch (month){
            case 1:
                cout<< "\nJanuary "<< year<< endl;
                numOfDays = 31;
                break;
            case 2:
                cout<< "\nFebruary "<< year<< endl;
                if (isLeapYear(year)) { // Call isLeapYear()
                    numOfDays = 29;
                }
                else {
                    numOfDays = 28;
                }
                break;
            case 3:
                cout<< "\nMarch "<< year<< endl;
                numOfDays = 31;
                break;
            case 4:
                cout<< "\nApril "<< year<< endl;
                numOfDays = 30;
                break;
            case 5:
                cout<< "\nMay "<< year<< endl;
                numOfDays = 31;
                break;
            case 6:
                cout<< "\nJune "<< year<< endl;
                numOfDays = 30;
                break;
            case 7:
                cout<< "\nJuly "<< year<< endl;
                numOfDays = 31;
                break;
            case 8:
                cout<< "\nAugust "<< year<< endl;
                numOfDays = 31;
                break;
            case 9:
                cout<< "\nSeptember "<< year<< endl;
                numOfDays = 30;
                break;
            case 10:
                cout<< "\nOctober "<< year<< endl;
                numOfDays = 31;
                break;
            case 11:
                cout<< "\nNovember "<< year<< endl;
                numOfDays = 30;
                break;
            case 12:
                cout<< "\nDecember "<< year<< endl;
                numOfDays = 31;
                break;
        }
        printMonthCalender(numOfDays, startingDay);
    }
}