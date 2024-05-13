#include <iostream>

int main(){

    //fill() = fills a range of elements with a specified value
    //fill(begin,end,value)


    //what if we have a array of 99 values
    const int size = 99;
    std::string foods[size];

    fill(foods, foods + (size/3), "Pizza");
    fill(foods + (size/3), foods + (size/3)*2, "panner");
    fill(foods + (size/3)*2, foods + size, "chicken");
    for (std::string food : foods){
        std::cout << food << std::endl;
    }
    return 0;
}