#include <iostream>

 void bakePizza(){
    std::cout << "Baking Pizza" << '\n';
 }

 void bakePizza(std::string topping1){
    std::cout << "Baking Pizza with " << topping1 << '\n';
 }

void bakePizza(std::string topping1, std::string topping2){
    std::cout << "Baking Pizza with " << topping1 << " and " << topping2 << '\n';
}

int main(){
    bakePizza("panner", "onion");
    return 0;
}

//functions can share same name but different functions parameters to acutally work
//function name with a parameter is known as function signature. and it should be always unique.