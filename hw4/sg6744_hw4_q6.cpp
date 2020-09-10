#include <iostream>
using namespace std;
// MORE EVEN DIGITS
int main() {
//input
    int n;
    do { // ensures user input is positive
        cout<< "Please enter a positive integer: ";
        cin>> n;
    }
    while (n <= 0);
//output
    int number, evenDigits, totalDigits;
    for (int count = 1; count <= n; count++){ // count from 1 to n
        totalDigits=0; evenDigits=0; // resets digit counts each number
        for (number = count; number > 0; number /= 10){ // check digits from right to left each number
            if (number %2 == 0) { // check if even
                evenDigits++; // count even digits
            }
            totalDigits++; // count total digits
        }
        if (evenDigits > (totalDigits/2)){ // even more than odd (and not equal amount)
            cout<< count<< endl; //print current number
        }
    }
    return 0;
}