#include <iostream>
using namespace std;
//ADDS TWO WORKERS' WORK TIMES TOGETHER
int main(){
//input
//while-loops here to ensure entries don't exceed their carryover value, so I can avoid rechecking for carryovers >1 in the addition later. I did not include an "invalid entry" print because I don't know if that would be considered not "EXACTLY like the example" 
	int johnDays, johnHours=24, johnMinutes=60;
	while(johnDays >= 60 || johnHours >= 24){
		cout<< "Please enter the number of days John has worked: ";
		cin>> johnDays;
		cout<< "Please enter the number of hours John has worked: ";
		cin>> johnHours;
		cout<< "Please enter the number of minutes John has worked: ";
		cin>> johnMinutes;
		cout<< endl;
	}
	int billDays, billHours=24, billMinutes=60;
	while(billDays >= 60 || billHours >= 24){
		cout<< "Please enter the number of days Bill has worked: ";
		cin>> billDays;
		cout<< "Please enter the number of hours Bill has worked: ";
		cin>> billHours;
		cout<< "Please enter the number of minutes Bill has worked: ";
		cin>> billMinutes;
		cout<< endl;
	}
//addition
	int totalDays, totalHours, totalMinutes;
	totalMinutes += johnMinutes + billMinutes;
	if (totalMinutes >= 60){
		totalMinutes -= 60; totalHours +=1;
	}
	totalHours += johnHours + billHours;
	if (totalHours >= 24){
		totalHours -= 24; totalDays +=1;
	}
	totalDays += johnDays + billDays;
//output
	cout<< "The total time both of them worked together is: ";
	cout<< totalDays<< " days, "<< totalHours<< " hours and "<<totalMinutes<< " minutes."<< endl;

	return 0;
}