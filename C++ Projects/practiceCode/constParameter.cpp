#include <iostream>

void printInfo(const std::string &name, const int &age){
    // name = " ";
    // age = 0;
    std::cout << name << '\n';
    std::cout << age << '\n';
};

int main(){
    //const parameter = parameter that is effectively read-only
    //code is more secure & conveys intent
    //useful for references and pointers

    std::string name = "Fire";
    int age = 23;
    printInfo(name, age);

    return 0;
}