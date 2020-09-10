// Assignment - Homework 8, Question 4
// Recursive function that finds the least costly solution to from start to end of array
// within the rules of game "Jump It"
#include<iostream>
using namespace std;

int bestJumpItScore (int arr[], int arrSize, int location);
int main(){
int arr[6] = {0, 3, 80, 6, 57, 10}; // if you change the array, ensure to update size in function call below

cout<< "best possible Jump It score is: "<< bestJumpItScore(arr, 6, 0) << endl; //<--update at argument #2
    return 0;
}
int bestJumpItScore (int arr[], int arrSize, int location){
    if (location == arrSize - 1) {
        return 0;
    }
    else {
        if (arr[location + 1] < arr[location + 2]){
            return bestJumpItScore(arr, arrSize, location + 1) + arr[location + 1];
        }
        else {
            return bestJumpItScore(arr, arrSize, location + 2) + arr[location + 2];
        }
    }
}