#include <iostream>
#include <list>

using namespace std;

int main(){


    list <string> cars = {"Sandro","bmw","Audi"};

    auto print = [](list <string> cars){for (string i: cars){


        cout << "car : "<<i<<endl;} //see the difference when the functinon take cars as parameter vs in that braket ( braket does see the changes if you want to use address )
    };
    print(cars);

    //getting a element in list from back;

    cout << "element at back: " <<cars.back()<<endl;
    cout << "element at front: " <<cars.front()<<endl;  

    //changing the front element 
    cars.push_front("New_front");
    cars.push_back("New_back");
    
    cout << "element at back: " <<cars.back()<<endl;
    cout << "element at front: " <<cars.front()<<endl;  
    cout<< "\n -------------------------------------------------- \n";
    print(cars);

    cars.pop_back();
    cout<< "\n -------------------------------------------------- \n";
    print(cars);

    