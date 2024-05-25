#include <iostream>

using namespace std;

int main() {

    string name, degree;
    int sap;
    float cgpa; 
    char sec;

    cout << "Enter Full Name: ";
    getline(cin, name);
    cout << endl << "Enter SAP id: ";
    cin >> sap;
    cout << endl << "Enter Degree: ";
    cin >> degree;
    cout << endl << "Enter Section: ";
    cin >> sec;
    cout << endl << "Enter CGPA: ";
    cin >> cgpa;
    
    if(name == "Rida Batool" && sap >= 700000 && sec == 'C' && cgpa > 3.25){
        cout << endl << "Congratulations, " << name << "! There is no need to submit any fee as you have won the scholarship.";

    } else {
        cout << endl << "Dear " << name << ", please submit your fee well before the last date (i.e., March 10,2024).";
    }

    

   
    return 0;
}