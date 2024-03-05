#include <iostream>
using namespace std;
int main(){
    int x = 10;
    int y = x++; // x = 11, y = 10 ++ as a postfix
    int z = ++x; // x = z = 11 ++ as a prefix

    std::cout << x;
    return 0;
}