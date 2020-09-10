// Assignment - Homework 7, Question 4
// Read a sentence input and return an array containing the words of the sentence, and updating the size of the array
// May use string methods, process should work in linear runtime, test the program in a main()
#include<iostream>
#include<string>
using namespace std;

string* createWordsArray(string sentence, int& outWordsArrSize);

int main(){
    string entry;
    int wordsArrSize = 0;
//input
    cout << "Please type a sentence and press Enter:" << endl;
    getline(cin, entry);
//make array
    string *wordsArr;
    wordsArr = createWordsArray(entry, wordsArrSize);
//output
    cout << "size of array = " << wordsArrSize<< " words" << endl;
    cout << "words in array: ";
    for (int i = 0; i < wordsArrSize; i++){
        cout<< wordsArr[i] << "  ";
    }
//cleanup
    cout<< endl;
    delete [] wordsArr;
    return 0;
}
string* createWordsArray(string sentence, int& outWordsArrSize) { //linear runtime
    string *wordsArr;
    wordsArr = new string[outWordsArrSize];
    for (int i = 0; i < sentence.length(); i++) {
        wordsArr[outWordsArrSize] = sentence.substr(i,(sentence.find(" ", i) - i));
        outWordsArrSize++; // increase size
        i = sentence.find(" ", i); // jump to space at end of word before i++
        if (i == -1){ // at the end of .find method will return npos = -1, so i want to end the loop
            i = sentence.length();
        }
    }
    return wordsArr;
}

/*
 if (sentence[i] == ' ' || sentence[i] == '.' || sentence[i] == ',' || sentence[i] == '\n') {
            if (sentence[i - 1] != ' ' && sentence[i - 1] != '.' && sentence[i - 1] != ',' && sentence[i - 1] != '\n' &&
                i != sentence.length() - 1) {

 */