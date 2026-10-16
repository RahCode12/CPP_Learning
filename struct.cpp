#include <iostream>
using namespace std;
struct detail
{
    string Name;
    int age;
    int clg_year;
    float CGP;
    char grade;
    
} ;

void print_s(detail student ){
     cout <<"Name: "<< student.Name<<endl;
    cout <<"age: "<< student.age<<endl;
    cout <<"clg_year: "<< student.clg_year<<endl;
    cout <<"CGP: "<<student.CGP<<endl;
    cout <<"grade: "<< student.grade<<endl;
    cout <<"\n";
}

int main(){

    detail student;
    student.Name = "Rahul Prasad";
    student.age = 17;
    student.clg_year = 1;
    student.CGP = 7.501;
    student.grade = 'B';

    detail student1;
    student1.Name = "Kamalika";
    student1.age = 18;
    student1.clg_year = 1;
    student1.CGP = 9.101;
    student1.grade = 'A';

    print_s(student);
    print_s(student1);

    


 }