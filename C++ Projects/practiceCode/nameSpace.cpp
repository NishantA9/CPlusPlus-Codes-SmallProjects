#include <iostream>



namespace first {
    int x = 1;
}

namespace second {
    int x = 2;
}

int main(){

    //NameSpace = provides a solution for preventing name conflicts
    // in large projects. Each entity needs a unique name.
    // A namespace allows for identically named entities as long as 
    //the namespaces are different.

    using namespace std; // with this line you can skip writing std but this will have a conflict with other code of std so alternate is
    using std::cout;

    int x = 0;
    std::cout << x << std::endl;
    cout << first::x << std::endl; // :: before first is known as scope resolution operator.
    cout << second::x << std::endl;
    return 0;

}