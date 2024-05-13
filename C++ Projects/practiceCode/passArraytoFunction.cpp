#include <iostream>

double getTotal(double prices[], int size){
    double total = 0;
    for(int i = 0; i < size; i++){
        total += prices[i];
    }
    return total;

    //if you pass this line in the for loop (sizeof(prices) / sizeof(prices[0])
    // you will not get the required Output
    /// heres why, when we pass array to a function it decays into pointer
    //function does not know how big a array is.
}

int main(){

    double prices[] = {0,1,2,3,4,5,6,7};
    int size = sizeof(prices) / sizeof(prices[0]);
    double total = getTotal(prices, size);
    std::cout << "$" << total << std::endl;
    return 0;
}