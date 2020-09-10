#include <iostream>
using namespace std;

void printShiftedTriangle(int n, int m, char symbol);
void printPineTree(int n, char symbol);

int main(){
    cout<< endl<< "Section a:"<< endl; // section A
    int tall, shifted;
    char symbol;
    cout<< "Enter how many lines tall for your triangle: ";
    cin>> tall;
    cout<< "Enter how many spaces to shift your triangle ot the right: ";
    cin>> shifted;
    cout<< "Enter what character the triangle is made of: ";
    cin>> symbol;
    printShiftedTriangle(tall, shifted, symbol);

    cout<< endl<< "Section b:"<< endl; // section B
    int triangles;
    cout<< "Enter number of triangles for your tree: ";
    cin>> triangles;
    cout<< "Enter what character the pine tree is made of: ";
    cin>> symbol;
    printPineTree(triangles, symbol);
    return 0;
}
void printShiftedTriangle(int n, int m, char symbol) {
    for(int row = 1; row <= n; row++){
        for(int space = n + m - row; space > 0; space--){
           cout<< " ";
        }
        for(int tri = 1; tri <= 2*row - 1; tri ++){
            cout<< symbol;
        }
        cout<< endl;
    }
}
void printPineTree(int n, char symbol) {
    for (int count = 1; count <= n; count++) {
        for (int row = 1; row <= count + 1; row++) {
            for (int space = n - row + 1; space > 0; space--) {
                cout<< " ";
            }
            for (int tri = 1; tri <= 2*row - 1; tri ++) {
                cout<< symbol;
            }
            cout<< endl;
        }
    }
}