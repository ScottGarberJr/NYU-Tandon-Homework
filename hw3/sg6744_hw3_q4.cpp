#include <iostream>
using namespace std;
// ROUNDING USING SWITCH STATEMENT
int main(){
//constants
    const int FLOOR_ROUND = 1;
    const int CEILING_ROUND = 2;
    const int ROUND = 3;
//input
    double numEntry;
    int roundMethod, roundResult;
    cout<< "Please enter a Real number:"<< endl;
    cin >> numEntry;
    cout<< "Choose your rounding method:"<< endl
    <<"1. Floor round\n"
    <<"2. Ceiling round\n"
    <<"3. Round to nearest whole number"<< endl;
    cin >> roundMethod;
//output
    switch (roundMethod){
        case FLOOR_ROUND:
            roundResult = numEntry - ((int)numEntry % 1);
            break;
        case CEILING_ROUND:
            if(numEntry == (int)numEntry) {
                numEntry -= 1;
            }
            roundResult = numEntry + 1 - ((int)numEntry % 1);
            break;
        case ROUND:
            if ((numEntry - (int)numEntry) < 0.5){
                roundResult = numEntry;
            }
            else {
                roundResult = numEntry + 1;
            }
            break;
    }
    cout<< roundResult<< endl;
    return 0;
}

