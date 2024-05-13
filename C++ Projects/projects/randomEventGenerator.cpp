#include <iostream>
#include <ctime> 

int main(){

    srand(time(0));
    int randNum = rand() % 6 + 1;

    switch(randNum){
        case 1:
            std::cout << "You have becomed Fire Guardian!\n";
            break;
        case 2:
            std::cout << "You have becomed Water Guardian!\n";
            break;
        case 3:
            std::cout << "You have becomed Fairy Guardian!\n";
            break;
        case 4:
            std::cout << " You have becomed Nature Guardian!\n";
            break;
        case 5:
             std::cout << " You have becomed Ice Guardian!\n";
            break;
        case 6:
            std::cout << " You have becomed Ghost Guardian!\n";
            break;
        default:
            std::cout << "Error\n";
            break;
    }

}