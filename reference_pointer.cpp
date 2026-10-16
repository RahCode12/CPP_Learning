#include <iostream>
using namespace std;

int main(){

    int variable = 10; 
    int &var = variable;

    var = 20;

    cout << variable << " The variable is "<<endl;
    cout << var << "alias" << endl;//when one is changed both is changed as it have same location
    cout << "Memory location of varibale : "<<&variable<<endl;
    cout << "Memory location of var : "<<&var<<endl;


    int *location = &variable;
    cout << "Value stored in location: "<< location <<endl;
    
    cout << "To get the value of address: " << *location <<endl;

    *location = 15;

    cout << "To get the value of address: " << *location <<endl;
    cout << "To get the value of address: " << variable <<endl;


    


    

}