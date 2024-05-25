#include <iostream>

using namespace std;

int main(){
    int val;

    cout << "Enter a value: ";
    cin >> val;

    val *= val;

    if (val % 2 == 0){
        cout << "Value is even...";
    } else {
        cout << "Value is odd...";
    }

    return 0;
}