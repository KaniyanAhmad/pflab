
#include <iostream>

using namespace std;

int main() {
    int a = 16;
    int b = 30;
    
    a = a + b;
    b = a - b;
    a = a - b;

    // int t;

    // t = a;
    // a = b;
    // b = t;

    cout << "A: " << a << "\nB: " << b << "\n";
    return 0;
}


