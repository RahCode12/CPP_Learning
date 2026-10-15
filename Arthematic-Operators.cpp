#include <iostream>
using namespace std;

int main () {
    int a=10, b=6;

    int sum = a+b;
    int product = a*b;
    a += b;

    cout << "sum :"<<sum<<endl;
    cout << "product :" <<product<<endl;
    cout << b++ <<endl;
    cout << ++b  <<endl;

    //Precedence:
    // () - Parentheses
    // *, /, % - Multiplication, Division, Modulus
    // +, - - Addition, Subtraction
    // >, <, >=, <= - Comparison
    // ==, != - Equality
    // && - Logical AND
    // || - Logical OR
    // = - Assignment


}