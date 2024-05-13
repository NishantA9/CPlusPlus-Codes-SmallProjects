#include <iostream>

/*
Recursion = a programming technique where a function 
invokes itself from within
break a complex concept into a repeatable single steps

(iterative vs recursive)

advantages = less code and is cleaner, useful for sorting and searching algorithms
disadvantages = more memory usage, slower execution
*/


//this is iterative approach
// void walk(int steps){
//     for(int i = 0; i < steps; i++){
//         std::cout << "You took a step! \n";
//     }
// };

// int main(){
//     walk(100);
//     return 0;
// }

//

//recursive approach

void walk(int steps){
    if(steps > 0){
        std::cout << "You took a step! \n";
        walk(steps - 1);  //if we remove the -1 this will run endlessly, this is stack overflow.
    }
};

int main(){
    walk(100);
    return 0;
}

