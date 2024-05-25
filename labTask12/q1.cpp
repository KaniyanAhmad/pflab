#include<iostream>
using namespace std;


int main (){

    int TopMarks[3][3] = {{89,94,78},{84,91,75},{81,88,74}};

    cout << "PF\tCS\tDLD" << endl;
    for(int i = 0; i <= 2; i++){
        for(int j = 0; j <= 2; j++){
            cout << TopMarks[i][j] << "\t";
        }
        cout << endl;
    }
    
    return 0;
}

