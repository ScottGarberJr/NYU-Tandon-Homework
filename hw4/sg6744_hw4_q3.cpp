#include <iostream>
#include <cmath>
using namespace std;
// DECIMAL TO BINARY
int main(){
//input
    int numInput;
    cout<< "Enter decimal number:"<< endl; // goes up to 1024
    cin>> numInput;
//conversion
    double exp=0;
    while (pow(2,exp) < numInput){  //check for highest base2 power
        exp++;
    }
    int base2=0;
    for (int base10 = numInput; base10 > 0; exp--){
        if (pow(2,exp) <= base10) {
            base2 += pow(10, exp); // update binary
            base10 -= pow(2, exp); // update remainder of decimal entry
        }
    }
//output
    cout<< "The binary representation of "<< numInput<< " is "<< base2;
    return 0;
}
