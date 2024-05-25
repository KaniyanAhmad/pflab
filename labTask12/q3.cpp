#include<iostream>
#include <ctime>
using namespace std;

int main (){

    int rn, even = 0, odd = 0;
    int arr[4][4];

    srand(time(NULL));
    


    for(int i = 0; i <= 3; i++){
        for(int j = 0; j <= 3; j++){
            rn = rand() % 100 + 1;
            arr[i][j] = rn;
        }
    }

    for(int t = 0; t <= 3; t++){
        for(int k = 0; k <= 3; k++){
            if(arr[t][k] % 2 == 0){
                even++;
            }else{
                odd++;
            }
            cout << arr[t][k] << "\t";
        }
        cout << endl;
    }

    cout << endl << "Even: " << even << endl << "Odd: " << odd << endl;

    
    return 0;
}

