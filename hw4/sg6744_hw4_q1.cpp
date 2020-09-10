#include <iostream>
using namespace std;
int main(){
// EVEN NUMBER COUNT (WHILE LOOP)
    cout<< "section a"<<endl;
//input
    int n = -1;
    while (n < 0) {
        cout << "Please enter a positive integer:";
        cin >> n;
    }
//output
    int x = 1;
    while (x <= n){
        cout<< x * 2<< endl;
        x++;
    }

// EVEN NUMBER COUNT (FOR LOOP)
    cout<< "section b"<<endl;
//input
    n = -1;
    while (n < 0) {
        cout << "Please enter a positive integer:";
        cin >> n;
    }
//output
    for (x = 1; x <= n; x++){
        cout << x * 2<< endl;
    }
    return 0;
}