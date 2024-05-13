#include <iostream>

int main(){
    //sizeof() = determines the size  in bytes of a:
                // variable, data type, class, objects etc...

    std::string name = "FireEmperor";
    double gpa = 2.5;
    char grade = 'A';
    bool student = true;
    char grades[] = {'A', 'B', 'C', 'D'};
    std::string students[] = {"Nishant", "Cherry", "Janhavi", "Pratik", "Mihir"};

    std::cout << sizeof(name) << " bytes" << std::endl;
    std::cout << sizeof(gpa) << " bytes" << std::endl;
    std::cout << sizeof(grade) << " bytes" << std::endl;
    std::cout << sizeof(student) << " bytes" << std::endl;
    std::cout << sizeof(grades) << " bytes"  << std::endl;
    std::cout << sizeof(students)/sizeof(std::string) << " elements" << std::endl;
    return 0;
} 