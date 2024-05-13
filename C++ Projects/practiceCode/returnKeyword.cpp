#include <iostream>

//we changed void to double because we are returning the result which is a double so we changed the function.
double square (double length){
    double result = length * length;
    return result;
}

double cube (double length){
    double result = length * length * length;
    return result;
}

std::string concatStrings(std::string string1, std::string string2){
    return string1 + " " + string2;  //concatenates two strings with a space in between them.
}

int main()
{
    
    //return = return a value back to the spot
    // where you called the encompassing function

    double length = 6;
    double area = square(length);
    double volume = cube(length);
    std::cout << "The area of the square is " << area << " cm^2\n";
    std::cout << "The volume is " << volume << " cm^3\n";

    std::string firstName = "Fire";
    std::string lastName = "Emperor";
    std::string fullName = concatStrings(firstName, lastName);
    std::cout << "My full name is " << fullName << "\n";
    return 0;

}