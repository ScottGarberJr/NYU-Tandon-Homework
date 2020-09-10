// Assignment - Homework 7, Question 2
// Check if two entries are anagrams
// linear runtime, not case-sensitive, disregard spaces and punctuation

#include<iostream>
#include<string>
using namespace std;

bool isAnagram(string str1, string str2);
void countLetters(string str, int letterCount[]);

int main() {
    string entry1, entry2;
    cout<< "Please enter two lines of text (press enter between them):"<< endl;
    getline(cin, entry1);
    getline(cin, entry2);


    if (isAnagram(entry1, entry2)) {
        cout<< "These two entries are anagrams." << endl;
    }
    else {
        cout<< "These two entries are NOT anagrams." << endl;
    }
    return 0;
}
bool isAnagram(string str1, string str2){
    int entry1Letters[26] = {0}, entry2Letters[26] = {0};
    int matchingLetters = 0;

    countLetters(str1, entry1Letters);
    countLetters(str2, entry2Letters);

    for (int i = 0; i < 26; i++){
        if(entry1Letters[i] == entry2Letters[i]){
            matchingLetters++;
        }
    }
    if (matchingLetters == 26){
        return true;
    }
    else {
        return false;
    }
}
void countLetters(string str, int letterCount[]){ //this should still be 26(textLine) runtime = linear
    string letters = "abcdefghijklmnopqrstuvwxyz";
    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < str.length(); j++) {
            if (str[j] == letters[i] || str[j] == letters[i] - 32) {
                letterCount[i]++;
            }
        }
    }
}