#include <iostream>
using namespace std;

void hoursSalary(int hours[7], int hoursTotal);

void assignTitle(int);

int main(){
    int userInput, totalHours;
    int hourPerDay[7];

    int i = 0;
    do{
        cout << "Enter Hours Day - " << i+1 << " = ";
        cin >> userInput;

        if(userInput >= 0  && userInput <= 10){
            hourPerDay[i] = userInput;
            i++;
        } else {
            cout << "The working Hour should be between 0 and 10!" << endl;
        }

    }while(i <= 6);

    for(int j = 0; j <= 6; j++){
        totalHours += hourPerDay[j];
    }
    cout << endl << "Minimum Hours(per week)\t= 35";
    cout << endl << "Total Hours of Worker(per week)\t= " << totalHours;
    hoursSalary(hourPerDay, totalHours);

    return 0;
}

void hoursSalary(int hours[7], int hoursTotal) {
    int t, daysPresent = 0, leaves = 7, stdHours = 0, overtime = 0, undertime = 0, fixSalary = 0, overtimeSalary = 0;
    for(t = 0; t <= 6; t++){
        if(hours[t] > 0){
            daysPresent++;
        }

        if(hours[t] == 7){
            stdHours++;
        }

        if(hours[t] >= 8 && hours[t] <= 10){
            overtime++;
        }

        if(hours[t] >= 1 && hours [t] <= 6){
            undertime++;
        }

        if(hours[t] <= 7){
            fixSalary += 5 * hours[t];
            if(hours[t] < 7 && hours[t] > 0){
                fixSalary -= 3;
            }
        } else {
            fixSalary += 35;
            overtimeSalary += (hours[t] - 7) * 7;
        }

        
    }

    leaves -= daysPresent;

    cout << endl << "Days Present\t= " << daysPresent;
    cout << endl << "Leaves\t= " << leaves;
    cout << endl << "Days with Standard Hours\t= " << stdHours;
    cout << endl << "Days with Overtime\t= " << overtime;
    cout << endl << "Days with Undertime\t= " << undertime;
    cout << endl << "Total Salary\t= " << (fixSalary + overtimeSalary);

    
    if(hoursTotal > 35 && hours[4] >= 0 && hours[6] >= 0){
            assignTitle(1);
    } else if(hoursTotal < 35){
            assignTitle(2);
    } else {
            assignTitle(3);
    }


}

void assignTitle(int value) {
    
    switch (value)
    {
    case 1:
        cout << endl << "Good Employee!";
        break;
    case 2:
        cout << endl << "Under Performer!";
        break;
    case 3:
        cout << endl << "Usual One!";
    }

}