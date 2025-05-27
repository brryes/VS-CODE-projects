#include <iostream>

using namespace std;

int main(){
    double sales = 95000;
    cout << "Sales: " << sales << endl;

    const double stateTaxRate = .04;
    double stateTax = sales * stateTaxRate;
    cout<< " States Tax: " << stateTax <<endl;

    const double countryTaxRate = .02;
    double countyTax = sales * countryTaxRate;
    cout<< " Country Tax: " << countyTax <<endl;

    double totalTax = stateTax + countyTax;
    cout << " total tax:  " << totalTax;

    return 0;
}