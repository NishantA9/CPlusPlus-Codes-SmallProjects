#include <iostream>

int main(){
    std::string foods[5]; //array are static data types

    int size = sizeof(foods)/sizeof(foods[0]); //formula for removing the size
    std::string temp;

    for (int i = 0; i < size; i++) {
        std::cout << "Enter the name of the food you like or 'q' to quit #" << i +1 << ": ";
        std::getline(std::cin, temp); //getline is written so that user may add spaces 
        if(temp == "q"){
            break;
        }
        else{
            foods[i] = temp;
        }
    }

    std::cout << "You like the following food: \n";

    for(int i = 0; foods[i].empty(); i++){
        std::cout << foods[i] << "\n";
    }

    return 0;
}