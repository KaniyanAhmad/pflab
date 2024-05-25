#include <iostream>
using namespace std;

int main(){

    double dollar, pkr, total;

    cout << "Enter the amount in Dollars = ";
    cin >> dollar;
    cout << endl << "Enter Today\'s Rate(Dollar-->PKR)= ";
    cin >> pkr;

    total = dollar * pkr;

    cout << endl << "Pakistani Rupees = " << total << endl;
    

    return 0;
}