#include <iostream>

class Student{
    public:
    int id;
    std::string name;
    int age;
    double gpa;

    Student(int id, std::string name, int age, double gpa){
        this->id = id;
        this->name = name;
        this->age = age;
        this->gpa = gpa;
    } 
};

int main(){

    /*
    Constructor = special method that is automatically called when an object is instantiated
    useful for assigning values to attributes as arguments
    */

   Student student1 (1,"N",23,3.6);

   std::cout << student1.id << std::endl;
   std::cout << student1.name << std::endl;
   std::cout << student1.age << std::endl;
   std::cout << student1.gpa << std::endl;

   return 0;

}