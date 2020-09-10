// Assignment - hw6 Question 5
// Get User full name input and rearrange into 'last name first' format

#include<iostream>
#include<string>
using namespace std;

int main(){
    string First_Name, Middle_Name, Middle_Initial, Last_Name;
    cout<< "Please enter your full name (\"First Middle Last\" format) :"<< endl;
    cin>> First_Name >> Middle_Name >> Last_Name;
    Middle_Initial = Middle_Name.substr(0,1);

    cout<< Last_Name << ", " << First_Name << " " << Middle_Initial<< "."<< endl;
    return 0;
}


