#include <iostream>
using namespace std;

int main(){
    int a = 10 , b = 10;
 auto add = [a,b](int c){
    return a + b -c; // [] square of accessing gobal variables () passing parameters {} function block 

 };
 cout << add(5) ;


}