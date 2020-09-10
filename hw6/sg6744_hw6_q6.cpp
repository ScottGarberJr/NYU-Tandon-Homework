// Assignment - hw6 Question 6
// Reads any user string input and then prints it with all numerical values replaced with 'x'

//HAS BUG


#include<iostream>
#include<string>
using namespace std;

void searchWords(string& input);
bool hasNumbers(string& word);
bool hasLetters(string& word);
void replacex(string& word);

int main(){
    string userInput;
    cout<< "Please enter a line of  text:" << endl;
    getline(cin, userInput);
    string sensoredInput = userInput;

    searchWords(sensoredInput);

    cout<< sensoredInput<< endl;
    return 0;
}
// search word by word for numbers but no letters, then if found call replacex()
void searchWords(string& str){
    string word;
    for (int i = 0; i < str.length(); i++){
        word = str.substr(i, str.find(" ", i) - i); // I BELIEVE MY ERROR IS HERE
        if (hasNumbers(word) && !hasLetters(word)) {
            replacex(word);
            i = str.find(" ", i)+ 1;
        }
    }
}
// check if word contains numbers
bool hasNumbers(string& word){
    for (int i = 0; i < word.length(); i++){
        if (word[i] >= '0' || word[i] <= '9') {
            return true;
        }
    }
    return false;
}
// check if word contains letters
bool hasLetters(string& word){
    for (int i = 0; i < word.length(); i++){
        if (word[i] >= 'a' || word[i] >= 'A' || word[i] <= 'z' || word[i] <= 'Z') {
            return true;
        }
    }
    return false;
}
// replace numbers in word with 'x'
void replacex(string& word){
    for (int i = 0; i < word.length(); i++){
        if (word[i] >= '0' || word[i] <= '9'){
            word[i] = 'x';
        }
    }
}
