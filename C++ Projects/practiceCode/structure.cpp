#include <iostream>

struct student{
    std::string name;
    double gpa;
    bool enrolled = true;
};

int main(){

    //struct = A structure that group related variables under one name
    // stucts can contain many different data types ( string, int, double, bool, etc.)
        // variables in a struct are known as "members"
        // members can be access with. "Class member access operator"

    student s1;
    s1.name = "Nishant";
    s1.gpa = 4.0;

    student s2;
    s2.name = "Cherry";
    s2.gpa = 4.0;

    std::cout << s1.name << std::endl;
    std::cout << s1.gpa << std::endl;

    std::cout << s2.name << std::endl;
    std::cout << s2.gpa << std::endl;
    return 0;
}

