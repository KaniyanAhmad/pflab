#include <iostream>

using namespace std;

int main (){

    int math;
    int phy;
    int comp;
    int isl;

    double total = 400;
    int sum;


    double per;


    cout << "Enter Your Math marks(Out of 100): ";
    cin >> math;
    cout << "\nEnter Your Physics marks(Out of 100): ";
    cin >> phy;
    cout << "\nEnter Your Computer marks(Out of 100): ";
    cin >> comp;
    cout << "\nEnter Your Islamiat marks(Out of 100): ";
    cin >> isl;

    sum = math + phy + comp + isl;

    per = (sum/total)*100;

    cout << "Percentage: " << per << "\n";

    if(per >= 50)
        cout << "Congratulations you have passed\n";
    

    return 0;
}