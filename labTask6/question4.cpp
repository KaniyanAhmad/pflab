#include <iostream>
using namespace std;

int main() {
    const int standard_hours_per_day = 7;
    const int days_per_week = 7;
    const int hourly_rate = 5;
    int total_hours = 0;
    int leave_days = 0;
    int overtime_days = 0;
    int days_present = 0;
    int working_hours;

    cout << "Enter working hours for each day of the week:\n";
    
    for (int day = 1; day <= days_per_week; day++) {
        do {
            cout << "Enter hours for Day " << day << ": ";
            cin >> working_hours;
        } while (working_hours < 0 || working_hours > 10);
        
        if (working_hours == 0)
            leave_days++;
        else if (working_hours > standard_hours_per_day)
            overtime_days++;
        
        total_hours += working_hours;
        if (working_hours > 0)
            days_present++;
    }

    cout << "\nMinimum Hours (per week) = " << standard_hours_per_day * days_per_week << endl;
    cout << "Total Hours of Worker (per week) = " << total_hours << endl;
    cout << "Days Present = " << days_present << endl;
    cout << "Leaves = " << leave_days << endl;
    cout << "Days with Overtime = " << overtime_days << endl;

    int salary = total_hours * hourly_rate;
    cout << "Total Salary = $" << salary << endl;

    if (total_hours > standard_hours_per_day * days_per_week && days_present >= 5 && days_present <= 7)
        cout << "\"Good Employee!\"" << endl;
    else
        cout << "\"Usual One!\"" << endl;

    return 0;
}
