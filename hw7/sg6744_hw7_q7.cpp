// Assignment - Homework 7, Question 7
// Write and test a function that reads a sequencial array to find & print how many and which integers are missing
// test in main(), function must have linear runtime

#include<iostream>
using namespace std;

//function prototypes
int* findMissing(int arr[], int n, int& resArrSize);
//main for testing
int main(){
    int testArrSize= 0, *testArr, i = 0, entry;
    testArr = new int[testArrSize];
    cout<< "Enter in the values of your array for testing:"
        << "\n Finish by entering in a negative number."<< endl;
    //i did not include constraints for the values being between 0 and n+1 because this is just for testing findMissing()
    do {
        cin>> entry;
        if (entry >= 0){ //so the array doesnt include the -1
            testArrSize++;
            testArr[i] = entry;
            i++;
        }
    }
    while (entry >= 0);
    cout<< "Original array: ";
    for (int i = 0; i < testArrSize; i++){
        cout<< testArr[i] << " ";
    }
    cout<< endl;
    int missingCount, *resArrPtr; //resultant array size of missing integers from testArr
    resArrPtr = findMissing(testArr, testArrSize, missingCount);
    cout<< "missing integers: ";
    for (int i = 0; i < missingCount; i++){
        cout<< resArrPtr[i] << " ";
    }
    cout<< endl;
    cout<< "# of missing = "<< missingCount<< endl;
    return 0;
}
int* findMissing(int arr[], int n, int& resArrSize){
    int *intCountArr;
    intCountArr = new int[n];
    for (int i = 0; i < n; i++){ //runtime += 1(n)
        intCountArr[arr[i]]++; //increments the count in the index # when arr[i] == that index;
    }
    int *resArr, j=0;
    resArr = new int[resArrSize];

    for (int i = 0; i <= n; i++){ //runtime += 1(n)
        if (intCountArr[i] == 0){
            resArrSize++;
            resArr[j] = i;
            j++;
        }
    }
    delete intCountArr;
    return resArr;
}