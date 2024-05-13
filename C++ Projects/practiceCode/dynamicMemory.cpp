#include <iostream>

int main(){

    /*
    Dynamic memory = Memory that is allocated after the program
    is already compiled and running.
    Use the 'new' operator to allocate
    memory in the heap rather than the stack

    Useful when we don't know how much memory we will need.
    Makes are programs more flexible, especially when acceptiong user input.
    */

//dynamically creating an array 
   char *pGrades = NULL;
   int size;
   std::cout << "Enter the number of grades: ";
   std::cin >> size;
   pGrades = new char[size];

   for(int i =0; i < size; i++){
        std::cout << "Enter grade "<<i+1<<": ";
        std::cin >>  pGrades[i];
   }

   //to print the grades
   for(int i = 0; i < size; i++){
        std::cout << pGrades[i] << " ";
   }

   delete [] pGrades; //free up the dynamically allocated memory

   return 0;
}