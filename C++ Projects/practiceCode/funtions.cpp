#include <iostream>

//creating a new function

//here you can rename the parameter it will show the same name as the of main function
void happyBirthday(std::string boi, int age){
    std::cout << "Happy Birthday! " << boi << "\n";
    std::cout << "Kya ukhad liya tere " << age << " saal meh??? \n";
    std::cout << "BKL Cake khila chal!!! ";
}

int main()
{
    // function = a block of reusable code
    std::string name = "Fire ";
    int age = 23;
    happyBirthday(name, age); //invoking the function. 
    //also when invoking a argument of main function into the other function
    //then pass the argument to the other function
    return 0;
}

//code in C++ is top down, so if you write function at the bottom
//of the main function it will not run.
//to run the function write it above the main function or else 
//just declare the function name and then write it down.

//eg

/*
#include <iostream>
//creating a new function
void happyBirthday();

int main()
{
    // function = a block of reusable code
    happyBirthday(); //invoking the function.
    return 0;
}

void happyBirthday(){
    std::cout << "Happy Birthday!\n";
    std::cout << "BKL Cake khila chal!!! ";
}
*/