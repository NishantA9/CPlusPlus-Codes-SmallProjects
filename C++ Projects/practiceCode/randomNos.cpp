#include <iostream>
#include <ctime> //This line includes a library that provides functions to work with time.

int main(){
    // pseudo-random = Not truly random (but close)

    srand(time(NULL));
    // int num = rand() ;
    //std::cout << num << std::endl; //0 to 32767 nos

        //int num = rand() %6;//six headed dice example but we have one problem, its only showing remainder. to show all nos from 1-5
        int num1 = (rand() % 6) + 1;   // generates a number between 1 and 6
        int num2 = (rand() % 6) + 1;
        int num3 = (rand() % 6) + 1;

        std::cout << num1 << std::endl; 
        std::cout << num2 << std::endl;
        std::cout << num3 << std::endl;

    return 0;
}

/*
In simple terms:

#include <ctime>: This line includes a library that provides functions to work with time.
srand(time(NULL));: This line sets the seed for generating random numbers based on the current time.
Explanation:

time(NULL): This function gets the current time (in seconds) since a reference point (like the Unix epoch).
srand(): This function is used to initialize the random number generator with a seed value.
By using time(NULL) as the seed, you ensure that the seed is different every time you run your program,
 which leads to different sequences of random numbers being generated.
*/