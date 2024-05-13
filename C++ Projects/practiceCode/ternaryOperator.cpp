#include <iostream>

int main(){
    //ternary operator ?: = replacement to an if/else statement
    // condition ? expression1 : expression2;

    //even odd program

    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    number % 2 ? std::cout << "Odd" : std::cout << "Even";

    //another way of writing. Eg: Boolean expression
    bool FireEmperor = true;
    std::cout << (FireEmperor? "Yes" : "No");

    return 0;
}