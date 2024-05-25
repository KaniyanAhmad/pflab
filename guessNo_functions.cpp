#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

void registration();
void menu();
void login();
void game();


int sap, pass, pass_checker;
int user_sap, user_pass;



void game(){

    system("clear");

    int secretNo, user_input, score, temp;

    srand(time(NULL));
    secretNo = rand() % 100 + 1;

    cout << secretNo;

    for(score = 100; score >= 0; score -= 10){
        cout << endl << "Please choose any number between 1 to 100: ";
        cin >> user_input;

        if(user_input == secretNo){
            cout << endl << "Congragulations! Your number " << user_input << "is correct! Your score is " << score << "out of 100.";
            break;
        }else if (user_input > secretNo){
            if (user_input > secretNo + 10) {
                cout << endl << "Your answer is too far from the correct number." << endl;
            } else {
                cout << endl<< "Your answer is greater than the correct number within the range of 10 numbers" << endl;
            }   
        }else {
            if (user_input > secretNo - 10) {
                cout << endl << "Your answer is lesser than the correct number within the range of 10 numbers" << endl;
            } else {
                cout << endl<< "Your answer is too far from the correct number" << endl;
            }
        }
    }

    if(score == 0){
        cout << endl << "Sorry! You have used all of your attempts. Your score is 0 out 100.";
    }



}

void login(){
    system("clear");
    cout << endl << "Enter Your Sap: ";
    cin >> sap;
    cout << "Enter Your Password: ";
    cin >> pass;

    if(sap == user_sap && pass == user_pass){
        game();
    }else{
        cout << "Wrong Password!...";
        menu();
    }
    


}

void menu(){

    int user_input;

    system("clear");
    cout << "Welcome to Number Guessing Game" << endl;
    cout << "--------------------------------" << endl;
    cout << "Choose an option:" << endl;
    cout << "1. Login" << endl;
    cout << "2. Register" << endl;
    cout << "3. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> user_input;
    

    switch (user_input)
    {
    case 1:
        login();
        break;
    
    case 2:
        registration();
        break;

    case 3:
        exit(1);
        break;

    default:
        cout << "Wrong Input! Try Again......";
        menu();
        break;
    }
}

void registration(){


    cout << endl << "Enter Your Sap: ";
    cin >> sap;
    cout << endl << "Enter Your Password: ";
    cin >> pass;
    cout << endl << "Confirm Your Password: ";
    cin >> pass_checker;

    if(pass_checker == pass){
        user_sap = sap;
        user_pass = pass;
        menu();
    } else {
        cout << "Passwords do not match! Please try again.";
        cin.get();
        registration();
    } 
}



int main(){

    menu();

    return 0;
}


