#include <iostream>
using namespace std;
// COIN COUNT TO DOLLARS AND CENTS
int main() {
//input
    int quarters, dimes, nickels, pennies;
    cout<< "Please enter number of coins:"<< endl;
    cout<< "# of quarters: "; cin>> quarters;
    cout<< "# of dimes: "; cin>> dimes;
    cout<< "# of nickels: "; cin>> nickels;
    cout<< "# of pennies: "; cin>> pennies;
//convert to dollars & cents
    int total = (quarters * 25) + (dimes * 10) + (nickels * 5) + pennies;
    int dollars = total / 100; int cents = total % 100;
//output    
    cout<< "The total is "<< dollars<< " dollars and "<< cents<< " cents"<< endl;
    return 0;
}