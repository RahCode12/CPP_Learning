#include <iostream>
using namespace std;

int main(){
    string user_name = "";
    int account_no = 0;
    int pass = 2104;
    int in_pass = 0;
    double balance = 10000.0;
    double amount = 0.0;
    int option = 0;

    //Getting input form the user

    cout << "Options available : \n" << "1. Check Balance \n" << "2. Withdraw money \n" <<endl;
    cout << "Enter the option :";
    cin >> option ;

    switch ((option))
    {
    case 1:
        cout << "Enter your username: ";
        cin >> user_name;
        if (user_name == "rah2104"){
            cout << "Correct Username!! \n"; // This should not be do inoder to prevent username theft 

            cout << "Enter the password :";
            cin >> in_pass;

            if (in_pass == pass){
                cout << "You have successfully login into your bank account \n";

                cout << "Enter the amount to withdraw: ";
                cin >> amount;

                if(amount < balance){
                    cout << "Your have withdrawn successfully \n " << amount;
                    balance = balance - amount;
                    cout << "Your account balance : " << balance << endl;
                }
                else{
                    cout << "Insufficient Balance = " << balance;
                }
            }
            else{
                cout << "Incorrect Pass \n";


        }}
        else{
            cout << "Incorrect username";
        }

        break;
    
    case 2:
        cout << "Balance of your acccount " << account_no << " " << balance ;
        break;
    
    default:
        cout << "invalid option is selected";
        break;
    }




}