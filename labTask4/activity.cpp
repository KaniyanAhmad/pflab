#include <iostream>

using namespace std;

int main() {

    string name;
    unsigned int age;

    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter Age: ";
    cin >> age;




    switch (age)
    {
    case 0 ... 12:
        cout << "Dear " << name << "! As a CHILD, you can participate in Activities No. 1, 2, and 3. Thank You!";
        break;
    case 13 ... 19:
        cout << "Dear " << name << "! As a TEENAGER, you can participate in Activities No. 2, 3, and 4. Thank You!";
        break;
    case 20 ... 35:
        cout << "Dear " << name << "! As a YOUNG ADULT, you can participate in Activities No. 4, 5, 6, 7, and 8. Thank You!";
        break;
    case 36 ... 200:
        cout << "Dear " << name << "! As a ADULT, you can participate in Activities No. 6, 8, and 9. Thank You!";
    default:
        break;
    }




    // if(age >= 0 && age <= 12){
        
    // } else if (age >= 13 && age <= 19){
        
    // } else if(age >= 20 && age <= 35){
       
    // } else {
        
    // }
   
    return 0;
}