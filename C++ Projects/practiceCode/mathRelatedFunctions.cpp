#include <iostream>
#include <cmath>

int main(){

//some math related functions
//go to www.cplusplus.com/reference/cmath/  
// on the above website you will find some useful math functions

   double x = 3;
   double y = 9;
   double a = 3.99;
   double z;

    // z = std::max(x,y); //finding maximum no
    // z = std::min(x,y); // finding minimum no
    // z = pow(2,5); //power function, no raised to some no
    // z = sqrt(9); //square root of a no
    // z = abs(-3); // gives the positive value of function
    // z= round(a); // round up function
    // z = ceil(a); // ceiling function which will round up 
    z = floor(a); // floor function which will round down

   std::cout << z;

   return 0;
}