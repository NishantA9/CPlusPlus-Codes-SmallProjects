/*
Inheritance = A class can recieve attributes and methods from another class
Children classes inherit from a parent class
Helps to reuse similar code found within multiple classes
*/
#include <iostream>
// //parent class
// #include <iostream>

// class Animal{
//     public:
//         bool alive = true;
//         void eat(){
//             std::cout << "This animal is Eating\n" << std::endl;
//         }
// };

// //child class

// class Dog : public Animal{
//     public:
//         void bark(){
//             std::cout << "This dog is Barking\n" << std::endl;
//         }

// };

//another example

class Shape{
    public:
        double area;
        double volume;
};

class Cube : public Shape{
    public: 
     double side;
     Cube(double side){
         this->side = side;
         this -> area = side * side * 6;
         this -> volume = side * side * side;
     }
};

class Sphere : public Shape{
    public: 
        double radius;
        Sphere(double radius){
            this->radius = radius;
            this -> area = 4 * 3.14 * (radius * radius);
            this -> volume = (4/3.0) * 3.14 * (radius * radius * radius);
        }
};

int main(){

    // Dog dog;

    // std::cout << dog.alive << std::endl;
    // dog.eat();
    // dog.bark();

    double cubeSide, sphereRadius;

    std::cout << "Enter the side of the cube: " << '\n';
    std::cin >> cubeSide;
    std::cout << "Enter the radius of the sphere: "<< '\n';
    std::cin >> sphereRadius;

    Cube cube(cubeSide);
    Sphere sphere(sphereRadius);

    std::cout << "Area: " << cube.area << "cm\n";
    std::cout << "Volume: " << cube.volume << "cm\n";
    std::cout << "Area: " << sphere.area << "cm\n";
    std::cout << "Volume: " << sphere.volume << "cm\n";

    return 0;
}