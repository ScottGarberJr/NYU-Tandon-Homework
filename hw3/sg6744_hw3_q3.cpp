#include <iostream>
#include <cmath>
using namespace std;
// QUADRATIC SOLUTION FINDER
int main(){
//input
    double a, b, c;
    cout<< "Please enter value of a: ";
    cin>> a;
    cout<< "Please enter value of b: ";
    cin>> b;
    cout<< "Please enter value of c: ";
    cin>> c;

//output
    double discSquared = (b * b) - (4 * a * c);
    double discriminant = sqrt(discSquared);
    cout.setf(ios::fixed); cout.setf(ios::showpoint); cout.precision(1);

    if (a==0 && b==0 && c==0){
        cout << "This equation has an infinite number of solutions"<< endl;
    }
    else if ((a==0 && b==0 && c!=0) || (discSquared < 0)){
        cout << "This equation has no solution"<< endl;
    }
    else if (a==0 && b!=0) {
        cout<< "This equation has a single real solution x="<< -c/b;
    }
    // if a != 0
    else if (a!=0 && b==0){
        cout << "This equation has no real solution"<< endl;
    }
    else if (discriminant < 0){
        cout << "This equation has no real solution"<< endl;
    }
    else if (discriminant == 0){
        cout<< "This equation has a single real solution x="<< -b / (2 * a);
    }
    else if (discriminant > 0){
        cout<< "This equation has two real solutions, "
        << "x="<< (-b + discriminant) / (2 * a)<< " and x="<< (-b - discriminant) / (2 * a)<< endl;
    }
    //Special thanks to Khan Academy for helping me remember this :D
    return 0;
}

