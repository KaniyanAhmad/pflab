#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
   float n1,n2,sum,product;
    cout << "Enter your 1st number: ";
    cin >> n1;
    cout << "Enter your 2nd number: ";
    cin >> n2;
    sum = n1 + n2;
    product = n1 * n2;
    cout << fixed << setprecision(2) << "\nSum: " << sum << endl << "Product: " << product << endl;
    return 0;
}
