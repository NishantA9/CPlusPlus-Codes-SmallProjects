#include <iostream>
#include <iomanip> //to set the precision for floating point numbers.
#include <limits> // for std::numeric_limits


//<< std::setprecision(2) << std::fixed this line will show the precision or cents or 2 decimal palces after the point.

void showBalance(double balance){
    std::cout << "Your balance is: $" << std::setprecision(2) << std::fixed  << balance << "\n";
};

double deposit(){
    double amount = 0;
    std::cout << "How much would you like to deposit?\n";
    std::cin >> amount;
    if(amount > 0){
        return amount;
    }else{
        std::cout << "Invalid amount!\n";
        return 0;
    }
};

double withdraw(double balance){
    double amount = 0;
    std::cout << "How much would you like to withdraw?\n";
    std::cin >> amount;
    if (amount > balance){
        std::cout << "Insufficient funds!\n";
        return 0;
    }else if (amount < 0){
        std::cout << "Invalid amount!\n";
        return 0;
    }else{
        return amount;
    }
};


int main(){
    double balance = 0;
    int choice = 0;
    
    do{
    std::cout << "*********************\n";
    std::cout << "Enter your Choice: \n";
    std::cout << "*********************\n";

    std::cout << "1. Show Balance \n";
    std::cout << "2. Deposit Money \n";
    std::cout << "3. Withdraw Money \n";
    std::cout << "4. Exit \n";

    std::cin >> choice;

    std::cin.clear(); //resets the error flag if user inputs anything wrong
    // fflush(stdin); // this will flush stdout and add a newline so that user can enter valid input.
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    
    switch(choice){
        case 1:
            showBalance(balance);
            break;
        case 2:
            balance +=  deposit();
            showBalance(balance);
            break;
        case 3:
            balance -= withdraw(balance);
            showBalance(balance);
            break;
        case 4:
            std::cout << "Thanks for using FireBank!!\n";
            break;
        default:
            std::cout << "Invalid Choice \n";
            break;
    }
    
    }while(choice!=4);

    return 0;
}
