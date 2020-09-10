#include <iostream>
using namespace std;
// MULTIPLICATION TABLE
int main() {
//input
    int n;
    cout<< "Please enter a positive integer:"<< endl;
    cin>> n;
//output
    for (int row = 1; row <= n; row++){
        for (int col = 1; col <= n; col++){
            cout<< row * col<< "\t";
        }
        cout<< endl;
    }
    return 0;
}
