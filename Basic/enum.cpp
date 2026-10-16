#include <iostream>
using namespace std;

enum Mark{
    A = 90,
    B = 75,
    C = 65,
    D = 35,
    check
};

enum Day{
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};

int main(){
    Mark rahul = A;
    Mark kamalika = C;
    cout <<"Mark of Rahul: "<<rahul<<endl;
    cout <<"Mark of Kamalika: "<<kamalika<<endl<<"\n";

    Mark temp = check;
    cout <<"Next value is seried automatically: "<<check<<endl; 

    Day today = Sunday;
    cout<< " \n Printing the values of Days \n ";
    cout<< "Today is : " << today << "\n";

}