#include <iostream>
#include <set>
using namespace std;

int main(){
    set<int> num_set = {1,4,63,23,85,3,7,35,7,13}; 
    set<int,greater<int>> des_num = {1,2,4,0,63,10,6,7,23,2}; // for desenceing order 

    //set cannot ne accessed through index 
    //set will omiet the duplicate values and order the values in ascending order
    
    for(int i:num_set){
        cout << i << endl;
    }

    num_set.insert(20);
    cout << "----------------------------Insert--------------------------------------"<<endl;

        for(int i:num_set){
        cout << i << endl;
    }

    num_set.erase(1);
    cout << "----------------------------Erase---------------------------------------"<<endl;
    for(int i:num_set){
        cout << i << endl;
    }
    num_set.clear();



}