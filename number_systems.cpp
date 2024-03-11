// We have the decimal(base 10), binary(base 2), and hexadecimal (base 16) numbers
// Hexadecimal numbers are used to represent colors in programming
//R G B  --> FF 00 00 An example is shown below

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    time(nullptr);
    srand(4);
    int number = rand();
    // int number = 0b11111111; --binary numbers
    //int number = 0xff;
    cout << number;
    return 0;
}

