#include <iostream>
#include <cmath>
using namespace std;

int main() {

    float lat1, long1, lat2, long2, pi = 3.14, distance;

    cout << "Enter the LHR Lat = ";
    cin >> lat1;
    cout << endl << "Enter the LHR Long = ";
    cin >> long1;
    cout << endl << "Enter the ISBD Lat = ";
    cin >> lat2;
    cout << endl << "Enter the ISBD Long = ";
    cin >> long2;


    lat1 = (lat1 * pi) / 180;
    lat2 = (lat2 * pi) / 180;
    long1 = (long1 * pi) / 180;
    long2 = (long2 * pi) / 180;

    


    distance = acos(sin(lat1)*sin(lat2)+cos(lat1)*cos(lat2)*cos(long2-long1))*6371;

    cout << endl << "Distance = " << distance << endl;

    return 0;
}