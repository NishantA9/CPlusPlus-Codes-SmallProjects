#include <iostream>

int main(){    
    // do while loop = do some block of code first, then repeat again if condition is true.

    int number;

    do{
        std::cout << "Enter a Positive number: ";
        std::cin >> number;
    }while(number < 0);

    std::cout << "You entered: " << number << " which is positive\n" << std::endl;
    return 0;
}