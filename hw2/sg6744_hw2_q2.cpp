#include <iostream>
using namespace std;
// DOLLARS AND CENTS TO COIN COUNT
int main(){
//input
	int dollars, cents;
	cout<< "Please enter your amount in the format of dollars and cents separated by a space: "<< endl;
	cin>> dollars >> cents;
	int total = (dollars * 100) + cents;
	int quarters, dimes, nickels, pennies;
//convert to change
	while(total >= 25){
		quarters++;
		total -= 25;
	}
	while(total >= 10){
		dimes++;
		total -= 10;
	}
	while(total >= 5){
		nickels++;
		total -= 5;
	}
	pennies = total;
//output
	cout<< dollars<< " dollars and "<< cents<< " cents are: "<< endl;
	cout<< quarters<< " quarters, "<< dimes<< " dimes, "<< nickels<< " nickels and "<< pennies<< " pennies"<< endl;
	return 0;
//looking back, I think I could have just made coin = total / coinvalue
//then total = total % coinvalue and move onto next highest value coin ..
}