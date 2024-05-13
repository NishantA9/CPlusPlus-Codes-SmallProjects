#include<iostream>
#include<vector>
#include<cmath>

int main(){

char operation;
double num1;
double num2;
double result;

std::cout <<  "***************Calculator Program***************" << '\n';

std::cout << "Choose the following Mode of Operations (+ - * / %): ";
std::cin >> operation;

std::cout << "Enter the first number: ";
std::cin >> num1;

std::cout << "Enter the second number: ";
std::cin >> num2;

switch(operation){
    case '+':
        result = num1 + num2;
        std::cout << "The result is " << result << '\n';
        break;
    case '-':
        result = num1 - num2;
        std::cout << "The result is " << result << '\n';
        break;
    case '*':
        result = num1 * num2;
        std::cout << "The result is " << result << '\n';
        break;
    case '/':
        if(num2 != 0) {
            result = num1 / num2;
            std::cout << "The result is " << result << '\n';
        } else{
            std::cout << "Error! Division by zero is not allowed." << '\n';
        }
        break;
    case '%':
        if(num2 != 0) {
            result = static_cast<int>(num1) % static_cast<int>(num2); 
            //static_cast is used to convert num1 and num2 to integral types before performing the modulus operation. 
            std::cout << "The result is " << result << '\n';
        } else{
            std::cout << "Error! Division by zero is not allowed." << '\n';
        }
        break;
    default:
    std::cout << "Invalid operation!! " << '\n' << "BKL Jo operator bola heh woh dal na!!" << std::endl;
    break;
}

    std::cout <<  "***************End***************" << '\n';
    return 0;
}

