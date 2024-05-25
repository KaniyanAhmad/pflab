#include<iostream>
using namespace std;


int main (){

    int TopMarks[3][3] = {{89,94,78},{84,91,75},{81,88,74}};

    cout << "PF\tCS\tDLD\tTotal" << endl;
    cout << TopMarks[0][0] << "\t" << TopMarks[0][1] << "\t" << TopMarks[0][2] << "\t" << TopMarks[0][0] + TopMarks[0][1] + TopMarks[0][2] << endl;
    cout << TopMarks[1][0] << "\t" << TopMarks[1][1] << "\t" << TopMarks[1][2] << "\t" << TopMarks[1][0] + TopMarks[1][1] + TopMarks[1][2] << endl;
    cout << TopMarks[2][0] << "\t" << TopMarks[2][1] << "\t" << TopMarks[2][2] << "\t" << TopMarks[2][0] + TopMarks[2][1] + TopMarks[2][2] << endl;
    
    return 0;
}

