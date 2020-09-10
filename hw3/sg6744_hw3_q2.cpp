#include <iostream>
using namespace std;
// STUDENT STATUS BASED ON GRAD YEAR
int main(){
//input
	string studName;
	int gradYear, currYear;

	cout<< "Please enter your name: ";
	cin>> studName;
	cout<< "Please enter your graduation year: ";
	cin>> gradYear;
	cout<< "Please enter current year: ";
	cin>> currYear;
	
//output
	int yearDiff = gradYear - currYear;
	if (yearDiff <= 0){ 
		cout<< studName<< ", you are Graduated"<< endl;
	}
	else if (yearDiff > 4){
		cout<< studName<< ", you are not in college yet"<< endl;
	}
	else {
		switch (yearDiff){
			case 1:
				cout<< studName<< ", you are a Senior"<< endl;
				break;
			case 2: 
				cout<< studName<< ", you are a Junior"<< endl;
				break;
			case 3: 
			 	cout<< studName<< ", you are a Sophmore"<< endl;
				break;
			case 4: 
				cout<< studName<< ", you are a Freshman"<< endl;
				break;
		}
	}
	return 0;
}