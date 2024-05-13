//pass by value //making copies of arguments
//pass by reference //ref as in memory address (&reference)

#include <iostream>

void swap(std::string &x, std::string &y){
    std::string temp = x;
    x = y;
    y = temp;
}

int main(){

    std::string x = "Fire";
    std::string y = "cherry";

    swap(x,y);
    std::cout << "X: " << x << '\n';
    std::cout << "Y: " << y << '\n';

    return 0;
}