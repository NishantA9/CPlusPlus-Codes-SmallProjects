#include <iostream>

//iterative approach
// int factorial(int num){
//     int result = 1;
//     for(int i = 1; i <= num; i++){
//         result *= i;
//     }
//     return result;
// }

//recursive approach

int factorial(int num){
    if(num > 1){
        return num * factorial(num-1);
    }else{
        return 1;
    }
}

int main(){
    int n;
    std::cout << "Enter a number to find its factorial: ";
    std::cin >> n;
    std::cout << factorial(n) << std::endl;
    return 0;
}