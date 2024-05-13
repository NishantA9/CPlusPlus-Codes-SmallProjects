#include <iostream>

int myNum = 3; //global variable , but this is less secure

void printNum(){
    int myNum = 2;
    std::cout << myNum <<'\n';
}


int main()
{
    //local variables = declared inside a function or block {};
    //Global variables = declared outside of all functions
    //a function always uses local variables first before accessing global variables.

    int myNum = 1;
    std::cout << ::myNum <<'\n'; // ::scope resolution 
    printNum();
    std::cout << myNum <<'\n';
   
    return 0;
}