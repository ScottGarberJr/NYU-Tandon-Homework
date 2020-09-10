// Assignment - Homework 8, Question 3
// Recursive functions that find the minimum value within a range of an array
// two different versions of function
#include<iostream>
using namespace std;

int minInArray1(int arr[], int arrSize);
int minInArray2(int arr[], int low, int high);

int main() {
    int arr[10] = {9, -2, 14, 12, 3, 6, 2, 1, -9, 15};
    int res1, res2, res3, res4;
    res1 = minInArray1(arr, 10);
    res2 = minInArray2(arr, 0, 9);
    cout<<res1<< " "<<res2<<endl; //should both be -9
    res3 = minInArray2(arr, 2, 5);
    res4 = minInArray1(arr+2, 4); //arr+2 is equivalent to &(arr[2])
    cout<<res3<< " "<<res4<<endl; //should both be 3
    return 0;
}

int minInArray1(int arr[], int arrSize){
/*
Here, the function is given arr, an array of integers, and its logical size, arrSize.
The function should find the minimum value out of all the elements in positions:
0, 1, 2, …, arrSize-1. */
    if (arrSize == 0){
        return arr[arrSize];
    }
    else {
        if (arr[arrSize - 1] < minInArray1(arr, arrSize - 1)){
            return arr[arrSize - 1];
        }
        else {
            return minInArray1(arr, arrSize - 1);
        }
    }
}
int minInArray2(int arr[], int low, int high) {
/*
Here, the function is given arr, an array of integers, and two additional indices: low and high
(low ≤ high), which indicate the range of indices that need to be considered.
The function should find the minimum value out of all the elements in positions:
low, low+1, …, high. */
    if (low >= high){
        return arr[high];
    }
    else {
        if (arr[high] < minInArray2(arr, low, high - 1)){
            return arr[high];
        }
        else {
            return minInArray2(arr, low, high - 1);
        }
    }

}
