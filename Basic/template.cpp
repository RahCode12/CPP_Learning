#include <iostream>
using namespace std;

template <typename X , typename Y> 

    Y sum( X a , Y b){
        return a +b;
    };




int main(){

    cout << sum<int , float>(2,2.01);//defining them in one place is fair enough the definition of X Y and will taken everywhere 
}