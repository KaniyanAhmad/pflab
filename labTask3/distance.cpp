#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int x1, y1, x2, y2;
    float distance;

    cout << "Enter the X1 = ";
    cin >> x1;
    cout << endl << "Enter the Y1 = ";
    cin >> y1;
    cout << endl << "Enter the X2 = ";
    cin >> x2;
    cout << endl << "Enter the Y2 = ";
    cin >> y2;

    distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

    cout << endl << "Distance = " << distance << endl;

    return 0;
}