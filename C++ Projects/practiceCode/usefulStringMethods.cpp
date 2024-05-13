#include <iostream>

//go to c++ website then check for strings.

int main(){

    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    //name.clear();  //This function is not necessary because the variable 'name' will be destroyed at the end of code
    // std::cout << "Hello " << name << std::endl;  // Outputs Hello followed by the user's input. but name will be destroyed at the end.

    //name.append("@gmail.com");
    //std::cout << "Your emailId / UserName is now " << name << std::endl;

    //std::cout << name.at(0) //this will return the first postion of character at that index.

    //name.insert(0, "@"); //this will insert the first postion of character at that index

    //name.erase(0, 1); //this will remove the first postion of character at that index

    //std::cout << name.find(' ') //this will find and return that postion.

    if(name.length() > 12){
        std::cout << "Your name is too long!" << std::endl;
    } else if (name.empty())
    {
        std::cout << "Your name is empty!" << std::endl;
    } 
    else {
        std::cout << "Hello, " << name << "! How are you today?"<< std::endl;
    }
    return 0;
}