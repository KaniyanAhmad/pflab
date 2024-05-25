#include <iostream>
using namespace std;

int main() {

    float f, c;

    cout << "Enter Temperatur in F: ";
    cin >> f;

    c = (f - 32) * 5/9;

    cout << endl << "Celsius: " << c << endl;
    return 0;
}