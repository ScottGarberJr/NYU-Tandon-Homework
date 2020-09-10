#include <iostream>
using namespace std;
// BOGO DEAL CALCULATOR
int main(){
//input
	int price1, price2;
	char checkCard;
	bool clubCard = false;
	double taxRate;

	cout<< "Enter price of first item: ";
	cin>> price1;
	cout<< "Enter price of second item: ";
	cin>> price2;
	cout<< "Does customer have a club card? (Y/N): ";
	cin>> checkCard;
	if (checkCard == 'y' || checkCard == 'Y'){
		clubCard = true;
	}
	cout<< "Enter tax rate, e.g. 5.5 for 5.5% tax: ";
	cin>> taxRate;
//math
	double basePrice = (double)price1 + price2;
	
	double priceDiscounted;
	if (price1 >= price2){
		priceDiscounted = (double)price1 + (price2 / 2);
	}
	else priceDiscounted = price2 + (price1 / 2);
	if (clubCard){
		priceDiscounted -= (priceDiscounted * 0.10);
	}

	double priceTotal = priceDiscounted + (priceDiscounted * (taxRate / 100));
//output
	cout.setf(ios::fixed); cout.setf(ios::showpoint); cout.precision(1);
	//above from the Problemsolving with C++ textbook pg.55
	cout<< "Base Price: "<< basePrice<< endl;
	cout<< "Price after discounts: "<< priceDiscounted<< endl;
	cout.precision(5);
	cout<< "Total price: "<< priceTotal<< endl;

	return 0;
}