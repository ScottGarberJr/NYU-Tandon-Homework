#include <iostream>
using namespace std;
// PRINT ASTERISK HOURGLASS
int main() {
//input
    int n;
    do { // ensures user input is positive
        cout<< "Please enter a positive integer: ";
        cin>> n;
    }
    while (n <= 0);
//output
    for (int row = 1; row <= n; row++){ // upper portion
        for (int col = 1; col < row; col++){ // spaces
            cout << " ";
        }
        for (int col = (2*n) - (2*row); col >= 0; col-- ){// asterisks
            cout << "*";
        }
        cout<< endl;
    }
    for (int row = n; row > 0; row--){ //lower portion only reverses the method of counting row. everything else unchanged
        for (int col = 1; col < row; col++){ // spaces
            cout << " ";
        }
        for (int col = (2*n) - (2*row); col >= 0; col-- ){ // asterisks
            cout << "*";
        }
        cout<< endl;
    }
    return 0;
}