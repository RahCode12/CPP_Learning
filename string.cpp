#include <iostream>
using namespace std;
#include <string>

int main(){
    string Name = "Rahul Prasad";

    int length = Name.length();
    cout << "Length of the string : " << length << endl;

    cout << "Enter a Sir Name to add in the Existing Name :";
    string sir_name = "";
    getline(cin,sir_name);

    cout << Name + " "+sir_name <<endl;
    cout << Name.append(" "+sir_name)<<endl;//will change the existing Name by adding the secondary string to its back

    cout << "Accessing using index " << Name <<" :: "<<Name[0]<< endl  << Name[9] << " Is it printing after endl"; 
    cout << Name[9] <<endl;

    char c_string[] = "C-language";//old method to init string in C 

    cout << c_string ;
 


}