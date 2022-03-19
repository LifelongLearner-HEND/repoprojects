// FCAI - Programming 1 - 2022 - Assignment 2
// Program Name: problems(1).cpp
// Program Description: Calculate the net and gross pay for a worker per week
// Last Modification Date: 17/3/2022
// Author Name: Hend Ahmed Kamal
// ID: 20211111
// Purpose: Calculate the gross and net pay for workers per week
#include <iostream>
using namespace std;
int main() {
    double hour_price=  16.78;
    double extra_hour= 25.17;    // extra hour = 1.5 * price_hour
    double gross_pay;
    double net_pay;
    float num_hours;
    int depend;
    cout << "Please, enter number of hours worked in a week :" <<endl;
    cin >> num_hours;
    cout << "Please, enter number of family dependants :" <<endl;
    cin >> depend;

    if (num_hours <= 40) {
        gross_pay = (num_hours*hour_price);
        cout <<"Gross Pay for the Week = " << gross_pay <<endl;
    }
    else{
        gross_pay = (num_hours*hour_price) + ((num_hours-40)*extra_hour);
        cout << "Gross Pay for the Week = " << gross_pay << endl;
    }
    gross_pay = gross_pay;
    double Social_Tax = (gross_pay * (0.06));
    cout << "Social Security Tax = " << Social_Tax <<endl;
    double fed_income = (gross_pay*(0.014));
    cout << "Federal Income Tax = " << fed_income <<endl;
    double state_income = (gross_pay*(0.05));
    cout << "State Income Tax = " << state_income <<endl;
    double Total_Tax = (Social_Tax + fed_income + state_income + 10);  // 10$ are withheld per week for union dues

    if (depend >= 3 ) {
        net_pay = gross_pay - (Total_Tax + 35);                    // 35$ are withheld for health insurance
        cout << "Net Pay = " << net_pay << endl;
    }
    else {
        net_pay = gross_pay - (Total_Tax);
        cout << "Net Pay = " << net_pay << endl;
    }
    char answer;
    while (true){
        cout << "WELCOME AGAIN TO PROGRAM!" << "\n" << "Enter 'n' to Exit or 'y' to Repeat :";
        cin >> answer;
        if (answer == 'n')
            break;
        else if (answer == 'y')
            return main();
    }
}
