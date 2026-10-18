#include <iostream>
#include <string>
using namespace std;


class Student {
    public:
        string name ;
        string roll_no;
        float attendance[5];
        int CGP;
        int year;

        bool attendance_checker(float attendance[5]);

        Student(int x){
            name = "Unknow";
            roll_no = "Unknow";
            attendance[0]=0;
            attendance[1]=0;
            attendance[2]=0;
            attendance[3]=0;
            attendance[4]=0;
            CGP = x;


        };

        
        int year_finder(string roll_no){
            int year = (roll_no[0]-'0')*10 + (roll_no[1]-'0');
            return year-26+1;
        }
};

bool Student::attendance_checker(float attendance[5]){
    int sum =0 ;

    for (int i = 0;i < 5 ; i++){
        sum = sum + attendance[i];

    }
    float avg_attendance = (float)sum / 5;
    if (avg_attendance > 75){
        return true;
    }
    else{
        return false;
    }

}

int main(){

    Student Rahul(7);
    cout << "Name : "<<  Rahul.name << "\n" << "Roll_no: " << Rahul.roll_no << endl << "\n";
    Rahul.name = "rahul prasad";
    Rahul.roll_no ="2603ai03"; 
    Rahul.attendance[0] = 90;
    Rahul.attendance[1] = 70;
    Rahul.attendance[2] = 80;
    Rahul.attendance[3] = 80;
    Rahul.attendance[4] = 90;

    Rahul.CGP = 0;

    cout << "Attendance checker: " << Rahul.attendance_checker(Rahul.attendance)<<endl;

    cout << Rahul.year_finder(Rahul.roll_no)<<endl;//Problem found the concentation when we try to do this index accessing it take the Assic 
                                             //Value and return an interger value

    //to get the value of a digit:
    string digit = "12";

    int number = (digit[0]-'0')*10 + (digit[1]-'0');
    cout << number;
    //To concate it properly 
    string numeric = string(1,digit[1])+digit[0];
    cout<<"\n \n"<< numeric;



}