#include <iostream>

enum Day { sunday = 0, monday = 1, tuesday = 2, wednesday = 3, thursday = 4,
           friday = 5, saturday = 6 };

int main(){

    //enums = a user defined data type that consists
    // of paired named integer constants.
    //GREAT if you have a set of potential options

     // if you dont assign values to enum then it is interanlly being assigned from 0 to the no of items yo have
     //if assigned it is known as explicitly which we did above

     Day today = monday;

     switch(today){
         case sunday:
             std::cout << "Today is Sunday" << std::endl;
             break;
         case monday:
             std::cout << "Today is Monday" << std::endl;
             break;
         case tuesday:
             std::cout << "Today is Tuesday" << std::endl;
             break;
         case wednesday:
             std::cout << "Today is Wednesday" << std::endl;
             break;
         case thursday:
             std::cout << "Today is Thursday" << std::endl;
             break;
         case friday:
             std::cout << "Today is Friday" << std::endl;
             break;
         case saturday:
             std::cout << "Today is Saturday" << std::endl;
             break;
         default:
             std::cout << "Today is an invalid day" << std::endl;
     }
}