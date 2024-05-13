#include <iostream>
#include <ctime>

int main(){

    int num;
    int guess;
    int tries;

    srand(time(NULL));
    num = rand() % 100 + 1; //giving random number between 1-100

    std::cout << "***** Number Guessing Game *****\n";

    do{
        std::cout << "Guess a number between 1 and 100: ";
        std::cin >> guess;
        tries++;
        if(guess < num){
            std::cout << "Your guess is too low.\n";
        }else if (guess > num) {
            std::cout << "Your guess is too high.\n";
        }else{
            std::cout << "Correct!\n" << "You got it in " << tries << " tries!\n";
            break;
    }
    }while(guess !=num);

    std::cout << "********************************\n";
    return 0;

}