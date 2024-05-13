#include <iostream>

int main()
{
    //forEach loop = loop that eases the traversal over 
    // an iterable data set.
    //less flexibility

    std::string students[] = {"Nishant", "Cherry", "Janhavi", "Pratik", "Mihir"};

    for(std::string student : students){
        std::cout << student << std::endl;
    }
    return 0;
}