#include <iostream>
using namespace std;

int main(){
    int i;

    i = 10;
    while(i >= 0){
        cout << "*";
        i--;
    }
    cout << endl;

    i = 0;
    do{
        cout << i;
        i++;
    }while(i <=9);
    cout << endl;

    for(i = 9; i >= 0; i--){
        cout << i;
    }

    return 0;
}