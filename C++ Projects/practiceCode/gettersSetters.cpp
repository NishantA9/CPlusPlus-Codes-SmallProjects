#include <iostream>


class Stove{
    private:
    int temperature = 0; //hidden attribute from outside world

    public:
    void setTemperature(int temp){
        if(temp < 0){
            temperature = 0;
        }
        else if(temp >= 10){
            temperature = 10;
        }
        else{
            temperature = temp;
        } 
    }

    int getTemperature(){
        return temperature;
    }

};

int main(){

/*
Abstraction = hiding unnecessary data from outside a class
Getter = function that makes a private attribute READABLE
setter = Function that makes a private attribute Writeable
*/
Stove stove;

stove.setTemperature(30);
std::cout << "The current temperature is: " << stove.getTemperature() << std::endl;
return 0;

}