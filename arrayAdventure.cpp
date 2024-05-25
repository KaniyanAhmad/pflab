#include <iostream>
using namespace std;

int main(){

    int RECORD[10][5] = {{201,6,7,8},{202,3,6,9},{203,4,5,3},{204,5,6,9},{205,8,7,8},{206,6,4,5},{207,7,8,9},{208,5,5,6},{209,8,8,9},{210,4,3,4}};
    int TOPPER[2][10];
    int i, j = 1, r, c, s = 10, n;

    for(i = 0; i <= 9; i++){
        RECORD[i][4] = RECORD[i][j] + RECORD[i][j+1] + RECORD[i][j+2];
    }

    cout << "Roll Numbers\tQuiz\t   Assignment\t\tViva\t\tTotal" << endl;


    for(r = 0; r <= 9; r++){
        for(c = 0; c <= 4; c++){
            cout << RECORD[r][c] << "\t\t";
        }
        cout << endl;
    }

    for(i = 0; i <= 9; i++){
        TOPPER[0][i] = RECORD[i][0];
        TOPPER[1][i] = RECORD[i][4];
    }

    cout << endl << "Unsorted Array:" << endl;
    for(r = 0; r <= 1; r++){
        for(c = 0; c <= 9; c++){
            cout << TOPPER[r][c] << "\t";
        }
        cout << endl;
    }

    for(i = 0; i < s-1; i++){
        for(j = 0; j < s-i-1; j++){
            if(TOPPER[1][j] < TOPPER[1][j+1]){
                swap(TOPPER[1][j], TOPPER[1][j+1]);
                swap(TOPPER[0][j],TOPPER[0][j+1]);
            }
        }
    }

    cout << endl << "Sorted Array:" << endl;
    for(r = 0; r <= 1; r++){
        for(c = 0; c <= 9; c++){
            cout << TOPPER[r][c] << "\t";
        }
        cout << endl;
    }

    cout << endl << "Congratulations to our Top Position Holders:" << endl;
    cout << endl << "Position1:\t" << TOPPER[0][0] << " scored " << TOPPER[1][0] << " Marks!";
    cout << endl << "Position2:\t" << TOPPER[0][1] << " scored " << TOPPER[1][1] << " Marks!";
    cout << endl << "Position3:\t" << TOPPER[0][2] << " scored " << TOPPER[1][2] << " Marks!" << endl;


    do{
        cout << endl << "Enter the Roll Number of Student to find the Results(0 to exit):\t";
        cin >> n;
        for(i = 0; i <= s-1; i++){
            if(n==TOPPER[0][i]){
                cout << "Position" << i+1 << ":\t" << TOPPER[0][i] << " scored " << TOPPER[1][i] << " Marks!" << endl;
            }
        }
    }while(n != 0);



    return 0;
}