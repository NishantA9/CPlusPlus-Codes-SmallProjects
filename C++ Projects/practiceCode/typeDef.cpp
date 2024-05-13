#include <iostream> // perform input and output operations.

#include <vector> // A vector in C++ is a dynamic array that can grow and shrink in size as needed.
 //It is a sequence container that stores elements of a similar type in contiguous memory locations.

//one of the longest data type which is not understandable at current level
// typedef std::vector<std::pair<std::string,int>> pairlist_t;

//easy example
// typedef std::string text_t;
typedef int number_t;

//another data type which is
using text_t = std::string; //using keyword is more popular just because its suitable for templates.

int main(){

    //typeDef = reserved keyword used to create an additional name
    // (alias) for another data type.
    // New Identifier for an existing data type
    // Helps with readability and reduces typos
    // Repalce with 'using' (work better w/ templates)


    // pairlist_t pl;

    text_t firstName = "Nishant";
    number_t age = 25;
    std::cout << firstName << '\n';
    std::cout << age << '\n';

    return 0;
}