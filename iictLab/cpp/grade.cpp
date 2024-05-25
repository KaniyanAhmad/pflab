#include <iostream>

using namespace std;

int main(){
    int marks;

    cout << "Enter your marks: ";
    cin >> marks;

    
    if (marks > 0 && marks < 50){
        cout << "Your grade is F";
    }else if(marks >= 50 && marks <= 60){
        cout << "Your grade is C..";
    } else if (marks >= 60 && marks <= 70){
        cout << "Your grade is B";
    } else if (marks >= 70 && marks <= 80){
        cout << "Your grade is A";
    } else if (marks >= 80 && marks <= 100){
        cout << "Your grade is A+";
    }

    cout << "\n";

    return 0;
}
