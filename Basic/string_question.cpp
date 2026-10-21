#include <iostream>
#include <string>
using namespace std;

int main() {

    string name;
    string result = "";
    cout << "Enter the String: " << endl;
    cin >> name ;

    for( int i = 0 ; i < name.length() ; i++){
        result = result+string(2,name[i]);
    }

    cout << result << endl;
    name = "rahul";
    auto i = name+"rahul";
    cout << name[0] << endl;
    cout << name[0] +name[0]<< endl;



}