#include <iostream>
using namespace std;

int main() {

    string name, hobbies, degree;
    int sap, sem;
    float cgpa; 
    char sec;

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
    


    cout << endl << "My name is " << name << ", MY SAP is " << sap << ", My Section is " << sec << ", My CGPA is " << cgpa << " and My Hobbies are: " << hobbies << "." << endl;


    return 0;
}