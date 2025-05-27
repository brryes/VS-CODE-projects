#include<iostream>

using namespace std;

float calculateTax (float grosspay){
    return grosspay * 0.20;
}

float calculateGovernmentDeduction (float SSS, float Philhealth, float pagibig ){
    return SSS + Philhealth + pagibig;
}

float calculateTotalDeduction (float grosspay, float SSS, float Philhealth, float pagibig){
    float tax = calculateTax(grosspay);
    float governmentDeduction = calculateGovernmentDeduction(SSS, Philhealth, pagibig);
    return governmentDeduction + tax;
}

float calculateTotalSalary(float basicpay, float allow){
    return basicpay + allow;
}

float calculateGrossPay(float totalSalary, float incentives){
    return totalSalary + incentives; 
}

float calculateNetPay(float grosspay, float totalDeduction){
    return grosspay - totalDeduction;
}

void inputEmployeeDetails(string& userName, string& position, float& basicpay, float& allow, float& incentives, float& SSS, float& Philhealth, float& pagibig){
    cout << "Enter Name: ";
    getline(cin, userName);

    cout << "Position: ";
    getline(cin, position);

    cout << "\nEnter your basic pay, allowance, and incentives: ";
    cin >> basicpay >> allow >> incentives;

    cout << "\nEnter your SSS, Philhealth, Pag-ibig Deduction";
    cin >> SSS >> Philhealth >> pagibig;
}

int main (){
    string userName, position;
    float basicpay, allow, incentives, SSS, pagibig, Philhealth;

    inputEmployeeDetails( userName,  position,  basicpay,  allow,  incentives,  SSS, Philhealth,  pagibig);

    float totalSalary = calculateTotalSalary(basicpay, allow);
    float grosspay = calculateGrossPay(totalSalary, incentives);
    float totalDeduction = calculateTotalDeduction(grosspay, SSS, Philhealth, pagibig);
    float netpay = calculateNetPay(grosspay, totalDeduction);

cout << "\nPayroll Summary for " << userName << endl;
    cout << "Position: " << position << endl;
    cout << "\nTotal Salary: " << totalSalary << endl;
    cout << "Gross Pay: " << grosspay << endl;
    cout << "\nDeductions:" << endl;
    cout << "Tax: " << calculateTax(grosspay) << endl;
    cout << "Government Deduction: " << calculateGovernmentDeduction(SSS, Philhealth, pagibig) << endl;
    cout << "Total Deduction: " << totalDeduction << endl;
    cout << "\nNet Pay: " << netpay << endl;

    return 0;

}