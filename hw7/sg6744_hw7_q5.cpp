// Assignment - Homework 7, Question 5
// Impliment 4 versions of a function that makes a new array using only the positive numbers from the given array
//
#include<iostream>
using namespace std;

void arrInput(int *arr, int &arrSize);
int* getPosNums1(int* arr, int arrSize, int& outPosArrSize);
void getPosNums2(int* arr, int arrSize, int*& outPosArr, int& outPosArrSize);
int* getPosNums3(int* arr, int arrSize, int* outPosArrSizePtr);
void getPosNums4(int* arr, int arrSize, int** outPosArrPtr, int* outPosArrSizePtr);

int main(){
//setup
    int arrSize, outPosArrSize, *arr;
    arr = new int[arrSize];
    arrInput(arr, arrSize);
//first function
    cout<< "Function 1"<< endl;
    cout<< "\tbase address: "<< getPosNums1(arr, arrSize, outPosArrSize) << endl;
    cout<< "\tupdated size: "<< outPosArrSize << endl;
//second function
    int *arr2;
    arr2 = new int[outPosArrSize];
    cout<< "Function 2"<< endl;
    getPosNums2(arr, arrSize, arr2, outPosArrSize);
    cout<< "\tbase address: "<< arr2 << endl;
    cout<< "\tupdated size: "<< outPosArrSize << endl;
    delete [] arr2;
//third function
    int *outPosArrSizePtr;
    outPosArrSizePtr = &outPosArrSize;
    cout<< "Function 3"<< endl;
    cout<< "\tbase address: "<< getPosNums3(arr, arrSize, outPosArrSizePtr) << endl;
    cout<< "\tupdated size: "<< outPosArrSize << endl;
//fourth function
    int *arr4, **arr4Ptr;
    arr4 = new int[*outPosArrSizePtr]; //pointer to dynamic array for positive integers
    arr4Ptr = &arr4; //double pointer to Ptr named arr4 to dynamic array above
    cout<< "Function 4"<< endl;
    getPosNums4(arr, arrSize, arr4Ptr, outPosArrSizePtr);
    cout<< "\tbase address: "<< arr4Ptr << endl;
    cout<< "\tupdated size: "<< outPosArrSize << endl;
    delete [] arr4;
//cleanup
    delete [] arr;
    return 0;
}
void arrInput(int *arr, int &arrSize){
    cout<< "Enter size:";
    cin>> arrSize;
    cout<< "Enter integers (positive or negative), pressing Enter between them:"<< endl;
    for (int i = 0; i < arrSize; i++){
        cin>> arr[i];
    }
}
int* getPosNums1(int* arr, int arrSize, int& outPosArrSize){
//returns the base address of the array (containing the positive numbers), and updates the output parameter outPosArrSize with the array’s logical size.
    int *arr1;
    outPosArrSize = 0;
    arr1 = new int[outPosArrSize];
    for (int i = 0; i < arrSize; i++){
        if (arr[i] > 0){
            outPosArrSize++;
            arr1[i] = arr[i];
        }
    }
    return arr1;
}
void getPosNums2(int* arr, int arrSize, int*& outPosArr, int& outPosArrSize){
//updates the output parameter outPosArr with the base address of the array (containing the positive numbers), and the output parameter outPosArrSize with the array’s logical size.
    outPosArrSize = 0;
    for (int i = 0; i < arrSize; i++){
        if (arr[i] > 0){
            outPosArrSize++;
            outPosArr[i] = arr[i];
        }
    }
}
int* getPosNums3(int* arr, int arrSize, int* outPosArrSizePtr){
//returns the base address of the array (containing the positive numbers), and uses the pointer outPosArrSizePtr to update the array’s logical size.
    int *arr3;
    *outPosArrSizePtr = 0;
    arr3 = new int[*outPosArrSizePtr];
    for (int i = 0; i < arrSize; i++){
        if (arr[i] > 0){
            (*outPosArrSizePtr)++; //without the () it kept trying to increment the pointer like an array index..
            arr3[i] = arr[i];
        }
    }
    return arr3;
}
void getPosNums4(int* arr, int arrSize, int** outPosArrPtr, int* outPosArrSizePtr){
//uses the pointer outPosArrPtr to update the base address of the array (containing the positive numbers), and the pointer outPosArrSizePtr to update the array’s logical size.
    *outPosArrSizePtr = 0;
    for (int i = 0; i < arrSize; i++){
        if (arr[i] > 0){
            (*outPosArrSizePtr)++;
            **outPosArrPtr = arr[i];
        }
    }
}
