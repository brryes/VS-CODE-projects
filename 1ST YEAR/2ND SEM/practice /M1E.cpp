#include <iostream>
#include <string>

using namespace std;

float calculateTax(float grossPay) {
    return grossPay * 0.20;
}

float calculateGovernmentDeduction(float sss, float philHealth, float pagIbig) {
    return sss + philHealth + pagIbig;
}

float calculateTotalDeduction(float grossPay, float sss, float philHealth, float pagIbig) {
    float tax = calculateTax(grossPay);
    float governmentDeduction = calculateGovernmentDeduction(sss, philHealth, pagIbig);
    return governmentDeduction + tax;
}

float calculateTotalSalary(float basicPay, float allowance) {
    return basicPay + allowance;
}

float calculateGrossPay(float totalSalary, float incentives) {
    return totalSalary + incentives;
}

float calculateNetPay(float grossPay, float totalDeduction) {
    return grossPay - totalDeduction;
}

void inputEmployeeDetails(string& userName, string& position, float& basicPay, float& allowance, float& incentives, float& sss, float& philHealth, float& pagIbig) {
    cout << "Enter your name: ";
    getline(cin, userName);
    
    cout << "Enter your position: ";
    getline(cin, position);

    cout << "Enter your basic pay: ";
    cin >> basicPay;

    cout << "Enter your allowance: ";
    cin >> allowance;

    cout << "Enter your incentives: ";
    cin >> incentives;

    cout << "Enter your SSS deduction: ";
    cin >> sss;

    cout << "Enter your PhilHealth deduction: ";
    cin >> philHealth;

    cout << "Enter your Pag-Ibig deduction: ";
    cin >> pagIbig;
}

int main() {
    string userName, position;
    float basicPay, allowance, incentives, sss, philHealth, pagIbig;

    inputEmployeeDetails(userName, position, basicPay, allowance, incentives, sss, philHealth, pagIbig);

    float totalSalary = calculateTotalSalary(basicPay, allowance);
    float grossPay = calculateGrossPay(totalSalary, incentives);
    float totalDeduction = calculateTotalDeduction(grossPay, sss, philHealth, pagIbig);
    float netPay = calculateNetPay(grossPay, totalDeduction);


    cout << "\nPayroll Summary for " << userName << endl;
    cout << "Position: " << position << endl;
    cout << "\nTotal Salary: " << totalSalary << endl;
    cout << "Gross Pay: " << grossPay << endl;
    cout << "\nDeductions:" << endl;
    cout << "Tax: " << calculateTax(grossPay) << endl;
    cout << "Government Deduction: " << calculateGovernmentDeduction(sss, philHealth, pagIbig) << endl;
    cout << "Total Deduction: " << totalDeduction << endl;
    cout << "\nNet Pay: " << netPay << endl;

    return 0;
}

