// Assignment - hw6 Question 2
// Checks if user entry is a palindrome

#include<iostream>
#include<string>
using namespace std;

bool isPalindrome(string str);

int main(){
    string userEntry;
    cout<< "Please enter a word: ";
    cin>> userEntry;

    if(isPalindrome(userEntry)) {
        cout<< userEntry<< " is a palindrome"<< endl;
    }
    else {
        cout<< userEntry<< " is not a palindrome"<< endl;
    }
    return 0;
}
bool isPalindrome(string str) {
    bool check = true;
    for (int i = 0; i < str.length() / 2; i++) {
        if (str[i] != str[str.length() - 1 -i]) {
            check = false;
        }
    }
    return check;
}
