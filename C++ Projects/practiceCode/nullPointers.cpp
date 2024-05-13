#include <iostream>

int main()
{
    /*
        Null Value = a special value that means something has no value.
        When a pointer is holding a null value,
        that pointer is not pointing at anything (null pointer)

        nullptr = keyword represents a null pointer literal

        nullptrs are helpful when determining if an address
        was successfully assigned to a pointer

        When using pointers, be careful that your code isn't
        dereferencing nullptr or pointing to a free memory
        this will cause undefined behavior

        from previous pointers.cpp :
         & address-of operator
         * dereference operator
    */

   int *pointer = nullptr; //if you are not assigining anything use nullptr for best coding practices
   int x = 123;
   pointer = &x;

   if(pointer == nullptr){
    std::cout << "Pointer is null" << std::endl;
   } else {
    std::cout << "Pointer is not null" << std::endl;
    std::cout << *pointer << std::endl;
   }
   return 0;
}



