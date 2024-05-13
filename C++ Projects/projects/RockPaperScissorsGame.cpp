#include <iostream>
#include <ctime>

char getUserChoice(){
    char player;
    std::cout << "Rock-Paper-Scissors Game!\n";
    do{
    std::cout << "Enter a valid choice from below\n";
    std::cout << "*********************\n";
    std::cout << "'r' for Rock, 'p' for Paper, 's' for Scissors\n";
    std::cin >> player;
    }while(player != 'r' && player != 'p' && player != 's');
    return player;
};

char getComputerChoice(){
    srand(time(NULL));
    int num = rand() % 3 +1;
    switch(num){
        case 1:
            return 'r';
            break;
        case 2:
            return 'p';
            break;
        case 3:
            return's';
            break;
        default:
            std::cout << "Invalid choice\n";
            break;
    }
    return 0;
};

void showChoice(char choice){
    switch(choice){
        case 'r':
            std::cout << "Rock\n";
            break;
        case 'p':
            std::cout << "Paper\n";
            break;
        case 's':
            std::cout << "Scissors\n";
            break;
        default:
            std::cout << "Invalid choice\n";
            break;
    }
};

void chooseWinner(char player, char computer){
    switch(player){
        case 'r': if(computer == 'r'){
                        std::cout << "It's a tie!\n";
                    }else if (computer == 'p'){
                        std::cout << "You Lost! Git Gud BKL!!!\n";
                    }else{
                        std::cout << "You Win! GG FireEmperor your are pro!!!\n";
                    }
                    break;
        case 'p': if(computer == 'p'){
                        std::cout << "It's a tie!\n";
                    }else if (computer == 's'){
                        std::cout << "You Lost! Git Gud BKL!!!\n";
                    }else{
                        std::cout << "You Win! GG FireEmperor your are pro!!!\n";
                    }
                    break;
        case 's': if(computer == 's'){
                        std::cout << "It's a tie!\n";
                    }else if (computer == 'r'){
                        std::cout << "You Lost! Git Gud BKL!!!\n";
                    }else{
                        std::cout << "You Win! GG FireEmperor your are pro!!!\n";
                    }
                    break;
        default:
                    std::cout << "Error in choosing.\n";
                    break;
    }
};

int main(){
char player;
char computer;

player = getUserChoice();
std::cout << "Your choice is: " << '\n';
showChoice(player);

computer = getComputerChoice();
std::cout << "The computer chose: " << '\n'; 
showChoice(computer);

chooseWinner(player, computer);


return 0;
};