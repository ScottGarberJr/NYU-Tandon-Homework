#include <iostream>
#include <cmath>
using namespace std;

double factorial(int num);
double eApprox(int n);
int main() {
    cout.precision(30);
    for (int n = 1; n <= 15; n++) {
        cout<<"n = "<<n<<'\t'<<eApprox(n)<< endl;
    }
    return 0;
}
double factorial(int num){  // function runtime is bigO[num]
    int product = 1;
    for (int j = 1; j <= num; j++){
        product *= j;
    }
    return product;
}
double eApprox(int n){ // runtime of factorial is of a lower order than eApprox
    // so function eApprox runtime is still bigO[n]
    double eSum = 1;
    for (int i = 1; i <= n; i++) {
        eSum += (1 / factorial(i));
    }
    return eSum;
}