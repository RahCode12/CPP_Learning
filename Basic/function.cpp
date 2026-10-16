#include <iostream>
using namespace std;

int plusFunc(int x, int y) {
  return x + y;
}

double plusFunc(double x, double y) {
  return x - y;
}

int addition(int n){
    if (n == 0){
        return n;
    }
    else {
        return n+addition(n-1);
    }
}

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

int fab(int n){

    if (n==1){
        return n;
    }
    else if(n==0){
        return n;
    }
    else{
        return (fab(n-1)+fab(n-2));
    }

}

int main() {
//   int myNum1 = plusFunc(8, 5);
//   double myNum2 = plusFunc(4.3, 6.26);

//   cout << "Int: " << myNum1 << "\n";
//   cout << "Double: " << myNum2;

//   int sum = addition(10);
//   cout << "Sum upto 2 : "<<sum<<endl;

//Fabonic Series using recurring function
int n = 4;
cout << "Count " << n <<"Fabonice :" <<fab(n)<< endl;

}