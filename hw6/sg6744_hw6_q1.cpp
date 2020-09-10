// Assignment - hw6 Question 1
// Reads 20 integers from user, prints the smallest value and the indices of their entry array the min value is located

#include <iostream>
using namespace std;

const int ARR_SIZE = 20;
int minInArray(int arr[], int arrSize);
void printMinIndices(int arr[], int arrSize);
int main() {
// INPUT
    int thisArrSize = ARR_SIZE;
    int thisArr[thisArrSize];
    cout<< "Please enter 20 integers separated by a space:"<< endl;
    for(int i = 0; i < thisArrSize; i++){
        cin>> thisArr[i];
    }
// OUTPUT
    cout<< "The minimum value is "<<  minInArray(thisArr, thisArrSize)<< " and it is located in the following indices: ";
    printMinIndices(thisArr, thisArrSize);
    cout<< endl;
    return 0;
}
int minInArray(int arr[], int arrSize){
    int minValue = arr[0];
    for (int i = 0; i < arrSize; i++){
        if (arr[i] < minValue){
            minValue = arr[i];
        }
    }
    return minValue;
}
void printMinIndices(int arr[], int arrSize){
    for (int i = 0; i < arrSize; i++){
        if (arr[i] == minInArray(arr, arrSize)){
            cout<< i << " ";
        }
    }
}