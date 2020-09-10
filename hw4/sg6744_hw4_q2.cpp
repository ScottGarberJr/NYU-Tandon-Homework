#include <iostream>
using namespace std;
// SIMPLIFIED ROMAN NUMERAL CONVERTER
int main(){
//constants
    const int I=1, V=5, X=10, L=50, C=100, D=500, M=1000;
//input
    int numInput;
    cout<< "Enter decimal number:"<< endl;
    cin>> numInput;
//conversion and output
    int remainder = numInput; // use proxy variable to not manipulate user input
    cout << numInput<< " is ";
    while (remainder > 1000){ // M
        cout << "M";
        remainder -= M;
    }
    while (remainder > 500){ // D
        cout << "D";
        remainder -= D;
    }
    while (remainder > 100){ // C
        cout << "C";
        remainder -= C;
    }
    while (remainder > 50){ // L
        cout << "L";
        remainder -= L;
    }
    while (remainder > 10){ // X
        cout << "X";
        remainder -= X;
    }
    while (remainder > 5){ // V
        cout << "V";
        remainder -= V;
    }
    while (remainder > 0){ // I
        cout << "I";
        remainder -= I;
    }
return 0;
}

