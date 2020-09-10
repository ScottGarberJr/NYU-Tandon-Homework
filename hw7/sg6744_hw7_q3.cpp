// Assignment - Homework 7, Question 3
/*
Question 3:
Implement the function:
void oddsKeepEvensFlip(int arr[], int arrSize)
This function gets an array of integers arr and its logical size arrSize.
When called, it should reorder the elements of arr so that:
1. All the odd numbers come before all the even numbers
2. The odd numbers will keep their original relative order
3. The even numbers will be placed in a reversed order (relative to their original order).
For example, if arr = [5, 2, 11, 7, 6, 4],
after calling oddsKeepEvensFlip(arr, 6), arr will be:
[5, 11, 7, 4, 6, 2]
 */

#include<iostream>
using namespace std;

void printArray(int arr[], int arrSize);
void swap(int& a, int& b);
void sortEO(int arr[], int arrSize);
void oddsKeepEvensFlip(int arr[], int arrSize);

int main(){
    int arrSize = 6, arr[6] = {5, 2, 11, 7, 6, 4};
    cout<< "Original: ";
    printArray(arr, arrSize);
    oddsKeepEvensFlip(arr, arrSize);
    cout<< "Sorted:   ";
    printArray(arr, arrSize);

    return 0;
}
void printArray(int arr[], int arrSize) {
    int i;

    for (i = 0; i < arrSize; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void swap(int &a, int &b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void sortEO(int arr[], int arrSize){
    for (int i = 0; i < arrSize; i++){
        if (i != 0 && arr[i] % 2 != 0 && arr[i-1] % 2 == 0){
            swap(arr[i], arr[i-1]);
            i -= 2;
        }
        else if (arr[i] % 2 == 0 && arr[i+1] % 2 != 0){
            swap(arr[i], arr[i+1]);
            i--;
        }
        else if (arr[i] % 2 == 0 && arr[i+1] % 2 != 0){
            swap(arr[i], arr[i+1]);
            i--;
        }
    }
}
void oddsKeepEvensFlip(int arr[], int arrSize){ // runtime 2.5(arr) which is Theta(arr)
    sortEO(arr, arrSize);  //places odds in front of evens in correct order
    int *leftPtr, *rightPtr;
    leftPtr = &arr[0]; //sets leftPtr to index 0
    rightPtr = &arr[arrSize - 1]; //sets rightPtr to the last index since evens are after odds
    while (leftPtr < rightPtr){ //moves leftPtr up the array until it hits an even number, then swaps with the rightPtr
        if (*leftPtr % 2 == 0){
            swap(*leftPtr, *rightPtr);
            rightPtr--; //if a swap happens the rightPtr will move to the left
        }
        leftPtr++;
    }
}