#include <iostream>

int main(){

    std::string user_name = "";
    int user_age = 0;
    std::cout << "Enter your name: ";
    std::getline(std::cin, user_name);

    std::cout <<"Enter your age:";
    std::cin >> user_age;

    std::cout << "Hello " << user_name << ". You are " << user_age << " years old." << std::endl;
    return 0;
}