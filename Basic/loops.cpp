#include <iostream>
using namespace std;

int main() {
    //just counting numbers based on the user_input 

    int user_input = 0;
    cout << "Enter the times of count :";
    cin >> user_input ;

    int i = 1;
    while(i <= user_input){
        cout << "Count: "<< i << endl;
        i++;
    }
    cout << " \n count using do while loop \n \n";

    i =1;
    do{
        cout << "Count: "<< i << endl;
        i++;
    }
    while (i <= user_input); //for the first time alone different will be there between do-while and while after that it will same . do-while run for n =1 always

    cout << "Counting using for loop \n";
    for(int i = 1; i <= user_input;i++ ){
        cout << "Count: "<< i << endl;

        if (i == 10){
            break;
        }
        else{
            continue;
        }
        cout << "These statment will not print"<< endl;
        
    }

    string  name = "Rahul";

    //iteration of variable or string and array in for can be done 

    for(char c : name){
        cout << "Character: " << c << endl;
    }
    

}