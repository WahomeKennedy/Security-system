#include <iostream>
using namespace std;

int main(){
    double sales = 95000;
    cout << "Sales: $" << sales << endl;

    const double stateTaxRate = .04;
    double stateTax = sales * stateTaxRate;
    cout << "State Tax: $" << stateTax << endl;

    const double countyTaxRate = .02;
    double countyTax = sales * countyTaxRate;
    cout << "County Tax: $" << countyTax << endl;

    double salesTotal = sales - (stateTax + countyTax);
    cout << "Total Sales: $" << salesTotal << endl;

    double taxTotal = stateTax + countyTax;
    cout << "Total Tax: $"<< taxTotal;

    // cout << salesTotal << endl
    //      << taxTotal;
    return 0;
}