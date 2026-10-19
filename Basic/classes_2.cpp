#include <iostream>
using namespace std;

class Learnt{
    private:
        int y =20;

    
    public:
        int x = 10;
        int access(){
            return y; // You cannot directly access the variable y ;only through class it best for protection terms
        }
        friend void print1(Learnt mark);

    
  

};

void print1(Learnt mark){
     cout << "The value of y : " <<mark.y<< endl;

    };
int main(){
    Learnt CPP;
    cout << "Learnt variable x: " << CPP.x<<endl;
    cout << "Learnt variable y: " << CPP.access()<< endl;
    print1(CPP);

} 