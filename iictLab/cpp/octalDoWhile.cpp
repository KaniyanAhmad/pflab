#include <iostream>
using namespace std;

int main(){
    int r , q , v;

    cout << "Enter a Value: ";
    cin >> v;

    do{
        r = v % 8;
      
    
    cout << "Octal: " << r << endl;
      v = v / 8;
    }while(v >= 1);
    cout << v;

    return 0;
}