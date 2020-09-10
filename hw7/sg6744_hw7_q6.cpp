// Assignment - Homework 7, Question 6
// Two programs that ask for any amount of positive integer inputs, then tells which lines contain a requested integer
// Use main1() and main2(), testable in main(), first cannot use vector and second must use vector

#include<iostream>
#include<vector>
using namespace std;

void main1();
void main2();
//function prototypes
void addToArray(int *arr, int &arrSize);
void searchArray(int *arr, int arrSize);
void addToVector(vector<int> &vec);
void searchVector(vector<int> vec);

//driver function for test
int main(){

    main1();  // using array
    main2();  // using vector

    return 0;
}
//Program #1 (no vectors)
void main1(){
    int *entries, entryAmount = 1;
    entries = new int[entryAmount]; //use dynamic array
    addToArray(entries, entryAmount);
    searchArray(entries, entryAmount);
    delete [] entries;
}
//Program #2 (using vectors)
void main2(){
    vector<int> entries;
    addToVector(entries);
    searchVector(entries);
}
//function definitions
void addToArray(int *arr, int &arrSize){
    cout<< "Please enter a sequence of positive integers, each in a separate line."
        << "\nEnd you input by typing -1."<< endl;
    int i = 0;
    do {
        cin>> arr[i];
        arrSize++;
        i++;
    }
    while (arr[i-1] != -1);//checks the previous index entry for -1
}
void searchArray(int *arr, int arrSize){
    int query, count = 0;
    cout<< "Please enter a number you want to search:"<< endl;
    cin>> query;
    for (int i = 0; i < arrSize; i++){
        if (count == 0 && arr[i] == query){
            cout<< query << " shows in lines " << i+1;
            count++;
        }
        else if (count > 0 && arr[i] == query){
            cout<< ", "<< i+1;
            count++;
        }
    }
    if (count == 0){
        cout<< query << " does not show at all in the sequence."<< endl;
    }
    else if(count > 0){
        cout<< "."<< endl;
    }
}
void addToVector(vector<int> &vec){
    cout<< "Please enter a sequence of positive integers, each in a separate line."
        << "\nEnd you input by typing -1."<< endl;
    int entry;
    do {
        cin>> entry;
        vec.push_back(entry);
    }
    while (entry != -1);//checks the previous index entry for -1
}
void searchVector(vector<int> vec){
    int query, count = 0;
    cout<< "Please enter a number you want to search:"<< endl;
    cin>> query;
    for (int i = 0; i < vec.size(); i++){
        if (count == 0 && vec[i] == query){
            cout<< query << " shows in lines " << i+1;
            count++;
        }
        else if (count > 0 && vec[i] == query){
            cout<< ", "<< i+1;
            count++;
        }
    }
    if (count == 0){
        cout<< query << " does not show at all in the sequence."<< endl;
    }
    else if(count > 0){
        cout<< "."<< endl;
    }
}

