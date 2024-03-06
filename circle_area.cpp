#include <iostream>
#include <cmath>
//#include <math.h>
using namespace std;

int main(){
    cout << "Enter the radius: ";
    double radius = 0;
    cin >> radius;
    const double pi = 3.142;
    double area = pi * pow(radius, 2); /* */
    cout << area;
    return 0;

}