#include <iostream>
using namespace std;
int fib(int num);

int main(){
    int n;
    cout<< "Please enter a positive integer: ";
    cin>> n;
    cout<< fib(n);
    return 0;
}

int fib(int num){
    int prev2 = 0, prev1 = 1, curr = 0;
    for (int f = 1; f < num; f++){
        curr = prev1 + prev2;
        prev2 = prev1;
        prev1 = curr;
    }
    return curr;
}

