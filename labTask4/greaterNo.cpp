#include <iostream>

using namespace std;

int main() {

    int n1, n2;
    
    cout << "Enter First No. = ";
    cin >> n1 ;
    cout << endl << "Enter First No. = ";
    cin >> n2;

    if(n1 > n2){
        if(n2 % 3 == 0){
            cout << endl << "First Number " << n1 << " is the greater Number and second number " << n2 << " is Divisible by 3";
        } else {
            cout << endl << "First Number " << n1 << " is the greater Number and second number " << n2 << " is not Divisible by 3";
        }
    }
   
   
   if(n2 > n1){
        if(n1 % 5 == 0){
            cout << endl << "Second Number " << n2 << " is the greater Number and first number " << n1 << " is Divisible by 5";
        } else {
            cout << endl << "Second Number " << n1 << " is the greater Number and first number " << n1 << " is not Divisible by 5";
        }
    }
   
    return 0;
}