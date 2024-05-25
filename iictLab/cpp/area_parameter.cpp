#include <iostream>

using namespace std;

int main(){
    int l, w, a, p;

    cout << "Enter Length: ";
    cin >> l;

    cout << "Enter Width: ";
    cin >> w;

    a = l*w;

    p = (l+w)*2;

    cout << "Area: " << a << endl << "Parameter: " << p << endl;

    if (a > p){
        cout << "Area is greater";
    } else {
        cout << "Parameter is greater";
    }

    cout << endl;

    return 0;
}