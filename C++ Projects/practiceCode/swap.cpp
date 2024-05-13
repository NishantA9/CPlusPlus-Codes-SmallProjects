#include <iostream>

int main(){

    int a, b, temp;

    // a = 10; b = 5;
    std::cout << "Enter the number a" << std::endl;
    std::cin >> a;
    std::cout << "Enter the number b" << std::endl;
    std::cin >> b;
    std::cout << "Number before swapping are " << a << ", " << b << std::endl;
    temp = a;
    a = b;
    b = temp;
    std::cout << "Number after swapping are " << a << ", " << b << std::endl;
}