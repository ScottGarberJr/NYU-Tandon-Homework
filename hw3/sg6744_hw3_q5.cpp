#include <iostream>
using namespace std;
// BMI CALCULATOR
int main() {
//constants
    const double TO_METERS = 0.0254; //from inches to meters
    const double TO_KG = 0.453592; //from pounds to kilograms
//input
    double pounds, inches;
    cout<< "Please enter weight (in pounds): ";
    cin>> pounds;
    cout<< "Please enter height (in inches): ";
    cin>> inches;
//math
    double bmi = (pounds * TO_KG) / ((inches * TO_METERS) * (inches * TO_METERS));
//output
    cout<< bmi<< endl;
    if (bmi >= 30) cout<< "The weight status is: Obese"<< endl;
    else if (bmi >= 25 && bmi < 30) cout<< "The weight status is: Overweight"<< endl;
    else if (bmi >= 18.5 && bmi < 25) cout<< "The weight status is: Normal"<< endl;
    else cout<< "The weight status is: Underweight"<< endl;
    return 0;
}
