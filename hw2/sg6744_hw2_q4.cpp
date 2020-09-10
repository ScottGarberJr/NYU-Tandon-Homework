#include <iostream>
using namespace std;
//
int main() {
//input
    int firstEntry, secondEntry, checkPositive = 0;
    while(checkPositive == 0){
        cout<< "Please enter two positive integers, separated by a space:"<< endl;
        cin>> firstEntry>> secondEntry;
        if(firstEntry < 0 || secondEntry < 0){
            cout<< "Invalid entry. Check if positive. \n";
        }
            //I added this because the instructions ask for a positive integer from user, and to see if this is something that I would get counted off for adding...
        else checkPositive++;
    }
//output    
    cout<< firstEntry<< " + "<< secondEntry<< " = "<< firstEntry + secondEntry << endl;
    cout<< firstEntry<< " - "<< secondEntry<< " = "<< firstEntry - secondEntry << endl;
    cout<< firstEntry<< " * "<< secondEntry<< " = "<< firstEntry * secondEntry << endl;
    cout<< firstEntry<< " / "<< secondEntry<< " = "<< (double)firstEntry / secondEntry << endl;
    cout<< firstEntry<< " div "<< secondEntry<< " = "<< firstEntry / secondEntry << endl;
    cout<< firstEntry<< " mod "<< secondEntry<< " = "<< firstEntry % secondEntry << endl;
    return 0;
}