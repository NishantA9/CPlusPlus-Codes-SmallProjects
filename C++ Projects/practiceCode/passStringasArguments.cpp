#include <iostream>
//passing structs inside a function in c++
struct car{
    int year;
    std::string model;
    std::string color;
};

void printCar(car &car){
    std::cout << &car << '\n';
    std::cout << car.year << " " << car.model << " " << car.color << std::endl;
}

//copy of car struct if we remove the & address of operator, otherwise if you want to show the original then remove &
void paintCar(car &car, std::string color){
    car.color = color;
}

int main(){
    car my_car;
    car my_carr;

    my_car.year = 2020;
    my_car.model = "BMW";
    my_car.color = "Red";

    my_carr.year = 2022;
    my_carr.model = "Audi";
    my_carr.color = "Blue";

    paintCar(my_car,"Silver");

    printCar(my_car);
    printCar(my_carr);
    return 0;

}

//in struct it is passed by value rather than pass by ref
