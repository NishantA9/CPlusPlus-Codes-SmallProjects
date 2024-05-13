#include <iostream>

int main(){
    
    int rows, cols;
    char symbol;

    std::cout << "Enter the number of rows: ";
    std::cin >> rows;
    std::cout << "Enter the number of columns: ";
    std::cin >> cols;
    std::cout << "Enter the symbol: ";
    std::cin >> symbol;

    for (int i =1; i <=rows; i++){
        for(int j = 1; j <= cols; j++){
            std::cout << symbol;

            // if(i == 1 || i == rows || j == 1 || j == cols){
            //     std::cout << symbol;
            // }else{
            //     std::cout << " ";
            // }
        }
    std::cout << '\n';
    }
    return 0;
}

/*
This code is an if-else statement nested inside the nested for loop. It checks whether the current iteration (i and j values) is at the 
border of the rectangle or not. If it's at the border (i.e., first row, last row, first column, or last column), 
it prints the symbol. Otherwise, it prints a space.

Here's a breakdown of the conditions:

i == 1: Checks if it's the first row.
i == rows: Checks if it's the last row.
j == 1: Checks if it's the first column.
j == cols: Checks if it's the last column.
So, if any of these conditions are met, the symbol is printed; otherwise, a space is printed.
*/