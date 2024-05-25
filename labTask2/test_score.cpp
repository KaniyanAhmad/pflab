#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    int eng, sci, math;
    float avg, total;

    cout << "Enter Marks(ENG)= ";
    cin >> eng;
    cout << endl << "Enter Marks(SCI)= ";
    cin >> sci;
    cout << endl << "Enter Marks(MATH)= ";
    cin >> math;

    total = eng + sci + math;

    avg = total / 3;

    cout << endl << endl << "Total Marks = " << total;
    cout << endl << fixed << setprecision(2) << "Average = " << avg << endl;



    return 0;
}