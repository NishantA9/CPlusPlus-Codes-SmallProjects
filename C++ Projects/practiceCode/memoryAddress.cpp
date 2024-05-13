#include <iostream>

int main(){

    //memory address = a location in memory where data is stored
    //a memory address can accessed with a & (address-of operator)

    std::string name ="FireEmperor";
    int age = 23;
    bool student = true;

    std::cout << &name << std::endl;
    std::cout << &age << std::endl;
    std::cout << &student << std::endl;
    //you can take that memory address and convert the hexadecimal to decimal or binary
    return 0;
}