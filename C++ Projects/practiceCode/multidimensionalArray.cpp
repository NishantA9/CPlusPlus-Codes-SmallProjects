#include <iostream>

int main(){

    // 2d arrays (array made of seperate arrays) i.e
    // 2d array = {array1, array2, array3}
    std::string cars[][3] = {{"Waganor", "Alto", "Brezza"},
                            {"Ferrari", "BMW", "LAMBORGINI"}, 
                            {"Audi", "Mastang", "Dodge"}
                            } ;
        
    // std::cout << cars[0][0] << " ";
    // std::cout << cars[0][1] << " ";
    // std::cout << cars[0][2] << "\n";
    // std::cout << cars[1][0] << " ";
    // std::cout << cars[1][1] << " ";
    // std::cout << cars[1][2] << "\n";
    // std::cout << cars[2][0] << " ";
    // std::cout << cars[2][1] << " ";  
    // std::cout << cars[2][2] << "\n";  

    int rows = sizeof(cars)/sizeof(cars[0]);
    int cols = sizeof(cars[0])/sizeof(cars[0][0]);  

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            std::cout << cars[i][j] << " ";
        }
        std::cout << "\n"; 
    }             
               

    return 0;
}