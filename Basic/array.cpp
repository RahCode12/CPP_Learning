#include <iostream>
using namespace std;

int main(){
    int num[5] = {1,2,3,4,5};

    for (int i : num){
        cout << "Number "<< i << endl;
    }

    string names[4] = {"Rahul","Raja","Divyesh","Prajeeth"};

    for (string i:names){
        cout << "Name: " << i <<endl;
        cout << " \n";
        for (char j:i){
            cout << "Character" << j << endl;
        }
    }

    int car[] = {1,2,34,523,23,29,40};//it is okie to not spiecfy the number of element in intition and assignment 

    //Values in array cann't be add once after it is created 

    int size = sizeof(car);
    cout << "size of array: " << size << "\n";

    int size_element = sizeof(car[0]);
    cout << "size of element: " << size_element << "\n";

    cout << "Counting: " << size/size_element << endl;




}