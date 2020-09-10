// Assignment - hw6 Question 3
// Array manipulation using functions on given arrays. Reverse, Remove Odds, Split Parity
// linear runtime for each function, temporary local arrays not allowed

#include <iostream>
using namespace std;

void printArray(int arr[], int arrSize);
void reverseArray(int arr[], int arrSize);
void removeOdd(int arr[], int& arrSize);
void splitParity(int arr[], int arrSize);

int main(){
    int arr1[10] = {9, 2, 14, 12, -3};
    int arr1Size = 5;

    int arr2[10] = {21, 12, 6, 7, 14};
    int arr2Size = 5;

    int arr3[10] = {3, 6, 4, 1, 12};
    int arr3Size = 5;

    reverseArray(arr1, arr1Size);
    printArray(arr1, arr1Size);

    removeOdd(arr2, arr2Size);
    printArray(arr2, arr2Size);

    splitParity(arr3, arr3Size);
    printArray(arr3, arr3Size);
    return 0;
}
void printArray(int arr[], int arrSize){
    int i;

    for (i = 0; i < arrSize; i++) {
        cout<<arr[i]<<' ';
    }
    cout<<endl;
}
void swap(int& a, int& b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void reverseArray(int arr[], int arrSize){ // Theta (1/2)(arrSize), runtime is linear
    for (int i = 0; i < arrSize/2; i++){
        swap(arr[i], arr[arrSize - 1 - i]);
    }
}
void removeOdd(int arr[], int& arrSize){ // Theta 2(arrSize), runtime is linear
    int oddCount = 0;
    for (int i = 0; i < arrSize; i++){
        if (arr[i] % 2 != 0) {
            oddCount++;
        }
    }
    for (int i = 0; i < arrSize; i++){
        if (arr[i] % 2 != 0 && arr[i+1] % 2 == 0) {
            swap(arr[i], arr[i+1]);
        }
        else if (arr[i] % 2 != 0 && arr[i+1] % 2 != 0) {
            arr[i] = arr[i+2];
            i--;
        }
    }
    arrSize -= oddCount;
}
void splitParity(int arr[], int arrSize){ // Theta 2(arrSize/2), runtime is linear
    int left = 0, right = arrSize - 1;
    while (left < right){
        if (arr[left] % 2 != 0 && arr[right] % 2 == 0){
            left++; right--;
        }
        else if (arr[left] % 2 == 0 && arr[right] % 2 != 0){
            swap(arr[left], arr[right]);
            left++; right--;
        }
        else if (arr[left] % 2 == 0 && arr[right] % 2 == 0){
            right--;
        }
        else if (arr[left] % 2 != 0 && arr[right] % 2 != 0){
            left++;
        }
    }
}