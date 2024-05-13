#include <iostream>
#include <cmath>

int main(){

double a;
double b;
double c;

std::cout << "Enter the value of a: " << '\n';
std::cin >> a;

std::cout << "Enter the value of b: " << '\n';
std::cin >> b;

c = sqrt(a*a + b*b);
//or
// c = sqrt(pow(a,2) + pow(b,2));

std::cout << "The hypotenuse of the right angled triangle is: " << c << std::endl;

}