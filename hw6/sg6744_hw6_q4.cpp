// Assignment - hw6 Question 4
// Sample PIN entry using rand-generated key to prevent "shoulder-surfing" (visual pin theft)

// HAS BUG


#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;

// Set Constant PIN
const int PIN = 13579; // IF CHANGING PIN, CHECK BELOW THAT NEW PIN LENGTH == PIN_SIZE
const int PIN_SIZE = 5;

// Implement Functions
//void PINtoArray (int PIN, int& PIN_arr);
void randGenNumArray(int randArr[]);
bool checkPINentry(string pinEntry, int randNumArray[]);

// MAIN
int main() {
    string pinEntry;
    int Arr123[10];
    cout<< "Please enter your PIN according to the following mapping:" << endl;
    cout<< "PIN: 0 1 2 3 4 5 6 7 8 9 " << endl;
    randGenNumArray(Arr123);
    do {
        cin >> pinEntry;
    }
    while (pinEntry.length() != PIN_SIZE);

//output
    if (checkPINentry(pinEntry, Arr123)){
        cout<< "Your PIN is correct"<< endl;
    }
    else {
        cout<< "Your PIN is not correct"<< endl;
    }
    return 0;
}

// create and print random 10-digit number array with numbers 1,2,3
void randGenNumArray(int randArr[]){
    srand(time(0));
    cout<< "NUM: ";
    for (int i = 0; i < 10; i++){
        randArr[i] = rand() %3 + 1;
        cout<< randArr[i]<< " ";
    }
    cout<< endl;
}
// check if each entry digit has an index that matches the respective digit of the pin
bool checkPINentry(string pinEntry, int randNumArray[]) {
    int matchCount = 0, PIN_index = 0;

    for (int entryDigit = 0; entryDigit < PIN_length; entryDigit++) {
        for (int arrayIndex = 0; arrayIndex < 10; arrayIndex++) {
            if (stoi(pinEntry[entryDigit]) == randNumArray[arrayIndex]) {
                //HERE IS THE ERROR. CANT COMPARE STRING AND INT, BUT CANT CONVERT CHAR TO INT
                if (arrayIndex == PIN[PIN_index]) {
                    matchCount++;
                }

            }
        }
        cout << PIN_index;
    }
    cout << matchCount << endl;
    if (matchCount == 5) {
        return true;
    } else {
        return false;
    }
}

//void PINtoArray (int PIN, int& PIN_arr);