#include <iostream>

int main(){

    double temperature;
    char unit;

    std::cout << "***** Temperature Conversion Program *****\n";
    std::cout << "Note: F = Fahrenheit & C = Celsius\n";
    std::cout << "What unit would you like to convert: ";
    std::cin >> unit;

    if(unit == 'f' || unit == 'F'){
        std::cout << "Enter the temperature in Celsius: ";
        std::cin >> temperature;
        temperature = (1.8 * temperature) + 32.0;
        std::cout << "The temperature is: " << temperature <<" F\n";
    }else if(unit == 'C' || unit == 'C'){
        std::cout << "Enter the temperature in Fahrenheit: ";
        std::cin >> temperature;
        temperature = (temperature - 32.0) / 1.8;
        std::cout << "The temperature is: " << temperature << " C\n";
    }else{
        std::cout << "Invalid input. BKL Please try again.\n";
    }

    std::cout << "******************************************\n";
    return 0;
}