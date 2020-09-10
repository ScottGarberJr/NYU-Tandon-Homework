#include <iostream>
#include <cmath>
using namespace std;
// GEOMETRIC MEAN
int main() {
    cout << "section a" << endl; // Section A
    double length; //var as a double so can be used properly in pow()
    cout<< "Please enter the length of the sequence: ";
    cin>> length;
    double numInput, product = 1;
    cout<< "Please enter your sequence:"<<endl;
    for(int count = 0; count < length; count++){ //use 'count' var so that 'length' doesnt decriment
        cin>> numInput;
        product *= numInput;
    }
    cout.setf(ios::fixed); cout.setf(ios::showpoint); cout.precision(4); //set places to 4
    cout<< "The geometric mean is: "<< pow(product, (1 / length))<< endl<< endl; //cube root by product^(1/3)

    cout << "section b" << endl; // Section B
    length = 0; product = 1;
    cout<< "Please enter a non-empty sequence of positive integers, each one in a separate line. End your sequence by typing -1:"<< endl;
    do {    // do-while loop in textbook
        cin>> numInput;
        product *= numInput;
        length++;
    }
    while (numInput != -1);
    cout<< "The geometric mean is: "<< pow(-product, (1 / (length-1)))<< endl<< endl;
    //modifications made to undo "-1" entry

    return 0;
}