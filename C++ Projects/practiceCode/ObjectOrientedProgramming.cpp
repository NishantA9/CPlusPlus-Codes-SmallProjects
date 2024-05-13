#include <iostream>

class Human{
    public:
    std::string name; //you can assign default attributes here eg 'Nick'
    std::string occupation;
    int age;

    void eat(){
        std::cout << name << " is eating" << std::endl;
    }

    void sleep(){
        std::cout << name << " is sleeping" << std::endl;
    }

    void dring(){
        std::cout << name << " is dringing" << std::endl;
    }

};

int main(){

    /*
    Object = A collection of attributes and methods
    They can have characteristics and could perform actions
    Can be used to mimic real world items (ex. Phone, Book, etc)
    Created from a class which acts as a blue-print
    */

   Human human1;
   
   std::cout << "Enter the name: " << '\n';
    std::getline(std::cin, human1.name);

   std::cout << "Enter the occupation: " << '\n';
   std::getline(std::cin, human1.occupation);

   std::cout << "Enter the age: " << '\n';
   std::cin >> human1.age;

   std::cout << "Your Name is: " << human1.name << std::endl;
   std::cout << "Your work is: " << human1.occupation << std::endl;
   std::cout << "Your age is: " << human1.age << std::endl; 

    human1.eat();
    human1.sleep();
    human1.dring();

   return 0;
}