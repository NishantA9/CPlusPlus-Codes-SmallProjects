#include <iostream>

int main(){
    //&& = check if two conditions are true
    // || = check if at least one condition is true
    // (!) = reverses the logical state of its operands

    int temp;
    bool sunny = false;

    std::cout << "Enter temperature: ";
    std::cin >> temp;
    
    if( temp <= 0 || temp > 30){
        std::cout << "Bad temperature " << std::endl;
    }else{
        std::cout << "Good Temperature " << std::endl;    
    }

    if(!sunny){
        std::cout << "It's cloudy" << std::endl;
    }else{
        std::cout << "It's sunny" << std::endl;
    }
    return 0;
}
