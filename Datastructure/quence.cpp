#include <iostream>
#include <queue>

using namespace std;

int main(){
    queue<string> car; //similar to stack here also , we cann't define elements at initialisation

    car.push("Audi");
    car.push("BMW");
    car.push("Honda");

    cout << "Car: " << car.front()<<endl ;
    cout <<"Car: " <<car.back()<<endl;

    //Difference between queue and stack is the 
    // pop element will be the first one that is added 
    // Access the front and bottom

    car.pop();

    cout << "Poping element after front: " << car.front() << endl; 
    cout << "Poping element after back: " << car.back() <<endl; 

    while(!(car.empty())){
        cout <<car.front()<<endl;
        car.pop();
    }



}