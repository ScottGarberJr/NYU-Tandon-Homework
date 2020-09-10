// Assignment - Homework 8, Question 2
// a. recursive function that sums the squares of each value in an int array
// b. recursive function that checks if array values are sorted in ascending order

#include<iostream>
#include<cmath>
using namespace std;

int sumOfSquares(int arr[], int arrSize);
bool isSorted(int arr[], int arrSize);

int main(){
    int arr[4] = {0, 1, 2, 3}; // if you change the array, ensure to update size in function calls below

    cout<< "sum of squared array values = " << sumOfSquares(arr, 4)<< endl; // <--update at argument #2

    if (isSorted(arr, 4)){ // <--update at argument #2
        cout<< "array is sorted in ascending order"<< endl;
    }
    else{
        cout<< "array is NOT in ascending order"<< endl;
    }
    return 0;
}
int sumOfSquares(int arr[], int arrSize){
/*
This function is given arr, an array of integers, and its logical size, arrSize. When called,
it returns the sum of the squares of each of the values in arr.
For example, if arr is an array containing [2, -1, 3, 10], calling sumOfSquares(arr, 4)
will return 114 (since, 22 + (-1)2 + 32 + 102 = 114). */
    int sum = 0;
    if (arrSize == 0){
        return 0;
    }
    else{
        return sumOfSquares(arr, arrSize - 1) + pow(arr[arrSize - 1], 2);
    }
}
bool isSorted(int arr[], int arrSize){
/*
 This function is given arr, an array of integers, and its logical size, arrSize. When called,
 It should return true if the elements in arr are sorted in an ascending order, or false if
they are not. */
if (arrSize == 0 || arrSize == 1){
    return true;
    }
    else {
        if (arr[arrSize - 1] <= arr[arrSize - 2]){
            return false;
        }
        else {
            return isSorted(arr, arrSize - 1);
        }
    }
}