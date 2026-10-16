#include <iostream>

namespace first{
    std::string name = "Rahul Prasad";

}

namespace second{
    std::string name = "Kamalika";
}

typedef int Number;

using String = std::string;

int main(){
    int age = 17;
    std::string name = "Raka";
    std::string dob = "12.02.2009";
    Number mark = 100;
    String her_name = "Rahul_Kamalika";

    float pi = (float)22/7;
    double PI = 3.12184718241;


    std::cout << "Printing Statement is working \n" ;
    std::cout << "My name is Rahul \n"<< "Age : " <<age << "\n" << "Date of Birth: " << dob <<"\n";
    std::cout << "Name: " <<first::name << "\n";
    std::cout << "Name: " <<second::name << "\n";
    std::cout << "Name: " <<name << "\n";
    std::cout << "Pi Value: " << pi <<"\n" ;
    std::cout << "Mark: "<< mark <<"\n";
    std::cout << "Her Name: "<<her_name;

}