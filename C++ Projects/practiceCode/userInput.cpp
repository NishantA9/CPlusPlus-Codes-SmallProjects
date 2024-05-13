#include <iostream>

//cout << (insertion operator)
//cin >> (extraction operator)

int main(){
    std::string name;
    int age;

    // std::cout << "Tell me your name?: ";
    // std::cin >> name;

    //to include spaces for example while typing full name use getline function
    // std::cout << "Tell me your full name?: ";
    // std::getline(std::cin, name); 

    // std::cout << "Tell me your age?: ";
    // std::cin >> age;

    //-------------------------------------------

    //another method where we add age first and then name
    std::cout << "Tell me your age?: ";
    std::cin >> age;

    std::cout << "Tell me your full name?: ";
    std::getline(std::cin >> std::ws, name); 
    //here we added extraction operator and then >> std::ws, this portion will eliminate any new line characters or white spaces before input
    std::cout << "Hello, " << name << '\n' << "! You are " << age << " years old." << std::endl;
    return 0;

}