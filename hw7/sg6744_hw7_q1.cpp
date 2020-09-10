// Assignment - Homework 7, Question 1
// read line of text and output the number of words in the line and letter occurrences
// function should run linearly, Theta n

#include<iostream>
#include<string>
using namespace std;

const string letters = "abcdefghijklmnopqrstuvwxyz";

void lineInfo(string text, int letterCount[]);
void countWords(string text);
void countLetters(string text, int letterCount[]);

int main(){
    string textLine;
    int letterCount[26] = {0};
//input
    cout<< "Please enter a line of text:" << endl;
    getline(cin, textLine);
//output
    lineInfo(textLine, letterCount);

    return 0;
}
void lineInfo(string text, int letterCount[]){
    countWords(text);
    countLetters(text, letterCount);
}
void countWords(string text){
    int wordCount = 1;
    for (int i = 0; i < text.length(); i++) {
        if (text[i] == ' ' || text[i] == '.' || text[i] == ',' || text[i] == '\n'){
            if (text[i-1] != ' ' && text[i-1] != '.' && text[i-1] != ',' && text[i-1] != '\n' && i != text.length() - 1){
                wordCount++;
            }
        }
    }
    cout<< wordCount<< "\twords"<< endl;
}
void countLetters(string text, int letterCount[]) {
    for (int i = 0; i < 26; i++) { //this should still be 26(textLine) runtime = linear
        for (int j = 0; j < text.length(); j++) {
            if (text[j] == letters[i] || text[j] == letters[i] - 32) {
                letterCount[i]++;
            }
        }
    }

    //print out occurrences
    for (int i = 0; i < 26; i++) {
        if (letterCount[i] != 0) {
            cout << letterCount[i] << "\t" << letters[i] << endl;
        }
    }
}

