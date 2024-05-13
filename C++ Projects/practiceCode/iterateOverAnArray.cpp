#include <iostream>

int main(){
    std::string students[] = {"Nishant", "Cherry", "Janhavi", "Pratik", "Mihir"};
    std::cout << students[0] << std::endl;

    for (int i =0; i < sizeof(students)/sizeof(std::string); i++) {
        std::cout << students[i] << std::endl;
    }
    return 0;

}