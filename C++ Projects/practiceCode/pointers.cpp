#include <iostream>

int main(){

    //pointers = variable that stores a memory address of another variable
    //sometimes its easier to work with an address

    // & address-of operator
    // * dereference operator

    std::string name = "FireEmperor";
    int age = 23;
    std::string freePanner[5] = {"Panner1","Panner2","Panner3","Panner4","Panner5",};

    std::string *pName = &name;
    int *pAge = &age;
    std::string *pFreePanner = freePanner;

    std::cout << *pName << std::endl;
    std::cout << *pAge << std::endl;
    std::cout << *pFreePanner << std::endl;

      for (int i = 0; i < 5; ++i) {
        std::cout << pFreePanner[i] << std::endl;
    }
    return 0;


}