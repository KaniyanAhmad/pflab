#include<iostream>

using namespace std;

int main(){
    int i=1,value,t;

    cout << "Enter a value: ";
    cin >> value;
    t = value;
    while(i < t){
        value=value*i;
        i++;
    }
    cout << value << endl;

    return 0;
}

