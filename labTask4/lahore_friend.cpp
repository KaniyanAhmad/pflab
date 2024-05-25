#include <iostream>

using namespace std;

int main() {

    float distance, length, diameter, area;

    cout << "Enter the Distance (in Km) from the Center to the Tall Plaza = ";
    cin >> distance;

    length = 2 * 3.14 * distance;
    diameter = 2 * distance;
    area = 3.14 * (distance * distance);




    cout << endl << "Length of Ring Road = " << length;
    cout << endl << "Diameter of Lahore = " << diameter;
    cout << endl  << "Area of Ring Road = " << area << endl;

    if (length >= 100){
        cout << endl << "Car\t:\t Mr. Ahmad" << endl << "Petrol\t:\t Mr. Ali";
    } else {
        cout << endl << "Car\t:\t Mr. Ali" << endl << "Petrol\t:\t Mr. Ali";
    }    
   
    return 0;
}