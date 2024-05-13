#include <iostream>

/*
 Overload Constructors = Multiple constructors w/ same name but different parameters
                        Allows for varying arguments when instantiating an object.
*/

class Pizza{
    public:
        std::string topping1;
        std::string topping2;

     
    Pizza(std::string topping1){
         this->topping1 = topping1;
    }
     
    Pizza(std::string topping1, std::string topping2){
         this->topping1 = topping1;
         this->topping2 = topping2;
    }
};

int main(){

 /*
    // Pizza one("Panner");
    // Pizza two("Cheese", "Onion");

    // std::cout << one.topping1 << '\n';
    // std::cout << two.topping2 << '\n';
 */

    return 0;
}
