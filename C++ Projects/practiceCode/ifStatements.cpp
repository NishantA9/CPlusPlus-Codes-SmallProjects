#include <iostream>

int main(){

    //if statements = do something if a condition is true.
    // if not then don't do it.
    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;

    // >= greater than or equal to / <= less than or equal to / == equals
    if(age >=100){
        std::cout << "You are an idiot.\n"; // Auto generated code by copilot XD 
    }else if (age < 0)
    {
       std::cout << "You haven't been born yet.\n";
    }
    else if (age >=18){
       std::cout << "You are an adult.\n";
    }
    else{
        std::cout << "You are not an adult.\n";
    }


    return 0;
}