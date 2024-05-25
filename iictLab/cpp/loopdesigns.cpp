#include <iostream>
using namespace std;

int main(){
    int n = 1;
   
    for(int i = 1; i <= 4; i++){
        for(int j = 1; j <= i; ++j){
            cout << n;
            ++n;
        }
        cout << endl;
    }

    
    cout << endl << endl;
    
    
    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= 5; j++){
            cout << j;
        }

        cout << endl;
    }

   
    cout << endl << endl;

    
    for(int i = 1; i <= 5; ++i){
        for(int j = 1; j <= i; ++j){
            cout << "*";
        }

        cout << endl;
    }

    
    cout << endl << endl;


    int t = 1;
    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= i; j++){
            cout << t;
        }
        t++;
        cout << endl;
    }

    

    return 0;
}