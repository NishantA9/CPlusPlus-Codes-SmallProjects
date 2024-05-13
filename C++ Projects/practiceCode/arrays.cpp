#include <iostream>

int main(){
    //array = a data structure that can hold multiple values
    //values are accessed by an index no
    //"kind of like a variable that holds multople values"

    std::string car[] = {"Maruti Suzuki Waganor", "Esteem", "Maruti 800", "Toyota Qualis", "Tavera", "Corvette", "BMW", "Audi", "Mustang", "Supra", "Hyndai"};
    car[10] = "KIA"; //replacing the data at the index no

    /*
    one more example
    std::string cars[3]; //we defined the array size.
    cars[0] = "Maruti Suzuki Waganor";
    cars[1] = "Esteem";
    cars[2] = "Maruti 800";
    */

    std::cout << car << '\n'; //this will return the memory address
    std::cout << car[0] << '\n'; //this will return the car of the index no
    std::cout << car[10] << '\n';

    for(int i = 0; i<11; i++){
        std::cout << car[i] << '\n';
    }
    return 0;
}