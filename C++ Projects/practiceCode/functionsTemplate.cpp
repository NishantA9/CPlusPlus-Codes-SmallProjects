#include <iostream>

template <typename T, typename U> //acepting 2 different data types
auto max(T x, U y) { //auto decides the compiler to think which data type should be used
    return (x > y) ? x : y;
}

int main() {
    std::cout << max(1, 2.1) << '\n';
    return 0;
}
 

 /*
 Function Template = describes what a function looks like.
 Can be used to generate as many overloaded function
 each using different data types

 ex. "It's like a cookie cutter...\n"
 "Cookies are the same shape but the dough can be different"
 */