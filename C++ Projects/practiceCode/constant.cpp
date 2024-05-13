#include <iostream>

int main(){
    //the const keyword specifies that a variable's value is constant
    //tells the compier to prevent anyting from modifying so its a read only

    const double pi = 3.14159;
    double radius = 10;

    double circumference = 2 * pi * radius;
    std::cout << "The circumference is " << circumference << std::endl;

    const double speedOfLight = 2.99792458;
    double c = speedOfLight; //as c is the symbol for speed of light
    std::cout << "The speed of light is " << c << std::endl;
    return 0;
}