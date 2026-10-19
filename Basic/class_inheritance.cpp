#include <iostream>
using namespace std;

class Students{
    public:
        string name = "Rahul Prasad";
        int age = 17;
    private:
        int mark = 90;
    protected:
        string roll_no = "2603ai03";    
    

};

class ID_card:public Students{
    public:
         string roll = roll_no;

};

class Animal {
  public:
    virtual void sound() {
      cout << "Animal sound\n";
    }
};

class Dog : public Animal {
  public:
    void sound() {
      cout << "Dog barks\n";
    }
};


int main(){
    Students Rah;
    ID_card Rahul;
    cout << "Gettin the roll_no from derived class: (proteceted)" << Rahul.roll << endl;

 Animal* a;  // Declare a pointer to the base class (Animal)
  Dog d;  // Create an object of the derived class (Dog)
  a = &d;  // Point the base class pointer to the Dog object
  a->sound(); // Call the sound() function using the pointer. Since sound() is not virtual, this calls Animal's version

  //same function can be there in derived and main class which base is called the function runs based on that . 
  d.sound();
  return 0;

}