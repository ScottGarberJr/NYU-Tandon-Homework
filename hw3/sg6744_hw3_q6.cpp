#include <iostream>
using namespace std;
// LONG DISTANCE CHARGE CALCULATOR
int main() {
//input
    int timeHour, timeMin, callLength = -1;
    string day;
    char temp;
    while (day!= "Mo" && day!= "Tu" && day!= "We" && day!= "Th" && day!= "Fr" && day!= "Sa" && day!= "Su") {
        cout<< "Please enter the day of the week of the call \n(using first two letters of the day, ex 'Mo' is 'Monday'): ";
        cin>> day;
    }
    while (timeHour < 0 || timeHour >= 24 || timeMin < 0 || timeMin >= 60) {
        cout<< "Please enter the time of call start in 24-hour notation \n(hour and minute separated by a ':'): ";
        cin>> timeHour >> temp >> timeMin;
    }
    while (callLength < 0){
        cout<< "Please enter the length of the call in minutes: ";
        cin>> callLength;
    }
//logic
    double callCost;
    if (day == "Sa" || day == "Su"){
        callCost = callLength * 0.15;
    }
    else {
        if (timeHour >= 8 && timeHour < 18){
            callCost = callLength * 0.40;
        }
        else {
            callCost = callLength * 0.25;
        }
    }
//output
    cout.setf(ios::fixed); cout.setf(ios::showpoint); cout.precision(2);
    cout<< "Cost of long distance call is $"<< callCost<< endl;
    return 0;
}