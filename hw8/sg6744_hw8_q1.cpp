// Assignment - Homework 8, Question 1
// Recursive Shapes
// there are three sections: a, b, & c

#include<iostream>
using namespace std;

void printTriangle(int n);
void printOpositeTriangles(int n);
void printRuler(int n);

int main(){

    cout<< "Section a: recursive triangle"<< endl;
    printTriangle(4);

    cout<< "\nSection b: opposite triangles"<< endl;
    printOpositeTriangles(4);

    cout<< "\nSection c: ruler"<< endl;
    printRuler(4);// change this number to test the ruler function
    return 0;
}
void printTriangle(int n){
    if (n == 0){
        return;
    }
    else {
        printTriangle(n-1);
        for (int i = 0; i < n; i++){
            cout<< "*";
        }
        cout<< endl;
    }
}
void printOpositeTriangles(int n){
    if (n == 0){
        return;
    }
    else {
        for (int i = 0; i < n; i++){
            cout<< "*";
        }
        cout<< endl;
        printOpositeTriangles(n-1);
        for (int i = 0; i < n; i++){
            cout<< "*";
        }
        cout<< endl;
    }
}
void printRuler(int n){
    if (n == 0){
        return;
    }
    else {
        printRuler(n-1);
        for (int i = 0; i < n; i++) {
            cout << "-";
        }
        cout << endl;
        printRuler(n-1);
    }

}