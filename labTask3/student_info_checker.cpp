#include <iostream>

using namespace std;

int main() {

    string name, hobbies, degree;
    int sap, sem;
    float cgpa; 
    char sec;
    bool result;

    cout << endl << "Enter 5 Hobbies: ";
    getline(cin, hobbies);
    cout << "Enter Full Name: ";
    getline(cin, name);
    cout << endl << "Enter SAP id: ";
    cin >> sap;
    cout << endl << "Enter Degree: ";
    cin >> degree;
    cout << endl << "Enter Semester: ";
    cin >> sem;
    cout << endl << "Enter Section: ";
    cin >> sec;
    cout << endl << "Enter CGPA: ";
    cin >> cgpa;
    


    result = (name == "Rida Batool" && sec == 'G');
    cout << "My Name is Rida Batool and My Section is G:\t" << result << endl;
    result = (degree == "BSCS" && sem == 2);
    cout <<  "My Degree Name is BSCS and Semester is 2:\t" << result << endl;
    result = (sap == 70002340 || sap == 70002350);
    cout << "My SAP ID is either 70002340 or 70002350:\t" << result << endl;
    result = (cgpa >= 3.00);
    cout << "My CGPA is Greater than 3.00:\t\t\t" << result << endl;
    
   
    return 0;
}