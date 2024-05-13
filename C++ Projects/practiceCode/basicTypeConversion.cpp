#include <iostream>

int main(){
    //type conversion = conversion a value of one data type to another
    //Implicit = automatic
    //Explicit = Precede value with new data type (int)

    // double x = (int) 3.14;
    // std::cout << x;
    // return 0;

    //example 2
    // char y = 100;
    // std::cout << y;
    // return 0;

    //explicit eg

    // std::cout << (char) 100;
    // return 0;

    //example 3
    int correct = 8;
    int questions = 10;
    double score = correct/(double) questions * 100; //type conversion was used here because of integer division
    std::cout << score << "%";
    return 0;
    // std::cout << (correct / (double)questions) * 100 << "%"; //one method and explicitly casting questions in double.
 
}