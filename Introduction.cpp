#include <iostream>
using namespace std;

int main(){

    const string Name = "Rahul Prasad";
    int age = 17;
    double CGP = 7.0;
    double mark = CGP*10;
    double attandance = 0.0;
    auto c = 10;
    cout << c <<endl;
    c = 8.18;
    cout << c <<endl;

    int integer = 10.102;
    cout << "Assigining an float value to Int Datatype  "<< integer <<endl; // consider the int part of decimal . Here 0.0 is taken as 0

    char character = 999;
    cout << "Assigining an int value to char Datatype  "<< character <<endl; // random character is generate due to overflow


    cout << "Hello Mr." <<Name<<endl;
    cout <<"Age is "<<age<<endl;
    cout<< "CGP : "<<CGP<<" Mark in CGP: "<< mark<<endl;

    
    cout <<"Enter Your Attandance Precentage: ";
    cin >> attandance;
    cout << "Your attandance is " << attandance;


    return 0;

}