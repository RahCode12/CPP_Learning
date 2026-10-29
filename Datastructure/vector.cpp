#include <iostream> 
#include <vector> 

using namespace std;

int main(){
    vector <string> Names = { "Rahul","Nahul","Prasad"};
    vector <int> Num = {1,23,10,3,13,80,90};

    cout << "Name: " << Names[0]<<endl;
    cout <<"Frist Element: " << Num.front()<<endl;
    cout <<"Last Element: " << Num.back()<<endl;
    cout <<"Vector index 4: "<<Num.at(4)<<endl;

    Names[0] = "Vijay";
    cout << "Name: " << Names[0]<<endl;
    Names.at(0) = "Chola";
    cout << "Name: " << Names[0]<<endl;

    Names.push_back("New_Name");
    cout <<"Last Element: " << Num.back()<<endl;

    Names.pop_back();
    cout <<"Last Element: " << Num.back()<<endl;

    cout <<"Size of the vector: "<< Num.size()<<endl;

    cout <<"Empty vector :" << Num.empty()<<endl;





    
}