#include <iostream>

int main(){

    //variables
   int x; //declaration integer (whole number)
   x = 5;
   int y = 6;
   int sum = x + y;
   std::cout << x << '\n'; //outputs the value of x which is 5
    std::cout << y << '\n'; //outputs the value of y which is 6
    std::cout << sum << '\n'; //outputs the value of sum which is 11

    //double (number including decimal point)
    double price = 9.99;
    std::cout << price << '\n'; //outputs the value of price which is 9.99

    //single character (stores single character)
    char initial = 'N';
    std::cout << initial << '\n'; //outputs the value of initial which is N

    //boolean (true or false)
    bool happy = true;
    std::cout << happy << '\n'; //outputs the value of happy which is true

    //string (objects that represents a sequence of text)
    std::string name = "FireEmperorYT";
    std::cout << name << '\n'; //outputs the value of name which is FireEmperorYT
    std::cout << "Hello " << name << '\n'; //outputs the value of
    std::cout << name.length() << '\n'; //outputs the value of name.length() which is 10

    return 0;
}