#include <iostream>
#include <array>

using namespace std;

int main(){

    array <int,5> arr = {1,2,3,4,5};

    cout << *arr.begin()<<endl;
    cout << *arr.end()<<endl;

    cout << arr.at(2) <<endl;
    cout << arr[1]<<endl;
    cout << get<2>(arr) <<endl;

    arr.front() = 10;

    cout << arr.front()<<endl;


    cout << arr.size()<<endl;

    array <string,3> arr1 = {"1","2","3"};

    array <string , 3> arr2 = {"rahul","kamalika","raka"};

    arr1.swap(arr2);//On swaping the memory address get exchanged so it is important to have same size (same datatype and same number of element)

    for (auto i : arr1){
        cout<<"arr: "<<i<<endl;
    }

    cout <<arr.data()<<endl; //memory address of first element 

    array <int,10> name;
    name.fill(10);

    cout<<"-------------------------\n";

    for(int i =0 ; i < sizeof(name)/sizeof(name[0]);i++){
        cout << "Element " << i << " : " << name.at(i)<<endl;
    }




}