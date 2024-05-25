#include <iostream>

using namespace std;

int main() {

    float weight, height, bmi;

    cout << "Enter Your Weight(kg) = ";
    cin >> weight;
    cout << endl << "Enter Your Height(m) = ";
    cin >> height;

    bmi = weight/(height*height);

    if(bmi <= 18.5){
        cout << endl << "Your BMI is \"" << bmi << "\" and You are \"Underweight\".";
    } else if(bmi >= 18.5 && bmi < 24.9 ){
        cout << endl << "Your BMI is \"" << bmi << "\" and You are \"Normal Weight\".";
    } else if(bmi >= 25 && bmi < 29.9 ){
        cout << endl << "Your BMI is \"" << bmi << "\" and You are \"Overweight\".";
    } else{
        cout << endl << "Your BMI is \"" << bmi << "\" and You are \"Obese\".";
    }
    
   
    return 0;
}