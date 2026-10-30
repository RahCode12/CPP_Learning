#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    vector <int> Number = {1,9,13,17,2,5,6};

    //Sorting using Algorithm
    sort(Number.begin(),Number.end());
    for(auto i : Number){
        cout << i << endl;
    }

    sort(Number.rbegin(),Number.rend());
    for(auto i : Number){
        cout << i << endl;
    }

    sort(Number.begin()+3,Number.end());
    for(auto i : Number){
        cout << i << endl;
    }
    //Searching using Algorithm
    vector <int>::iterator max = max_element(Number.begin(),Number.end()); //iterator is the pointer of datatype vector
    auto min = min_element(Number.begin(),Number.end());

    cout <<"Max: "<<*min<< endl; //




}