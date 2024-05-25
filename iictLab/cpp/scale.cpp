#include <iostream>

using namespace std;

int main (){
    int scale, salary;
    int bonus;

    cout << "Enter Your scale: ";
    cin >> scale;

    cout << "Enter Your salary: ";
    cin >> salary;

    if (salary >= 15){
        bonus = (salary * 50)/100;
    } else {
        bonus = (salary * 25)/100;
    }
    salary += bonus;
    cout << "Your Bonus is: " << bonus << endl << "Your total salary is: " << salary << endl;

    return 0;
}