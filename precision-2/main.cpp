#include <iostream>
using namespace std;

/*
 * Programa que muesta cuál es el primer natural no representable como double.
 */      
int main() {
    double x = 9007199254740992;  // 2^53 
    double y = 9007199254740993;  // 2^53 + 1
    
    cout << fixed;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    
    return 0;
}
