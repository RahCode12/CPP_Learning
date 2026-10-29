#include <iostream>
#include <stack>

using namespace std;

int main(){
    //stack<int> stack_new = {1,2,3,4,5,6}; //It is not possbile in stack

    //Step 1 just defination;
    stack<int> stack_new;

    stack_new.push(1);
    stack_new.push(2);
    stack_new.push(3);
    stack_new.push(4);
    stack_new.push(5);

    while(!(stack_new.empty())){
        cout << "top_elements: " << stack_new.top()<<endl;
        stack_new.pop();
    }


}