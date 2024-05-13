/*

In C++, you can create a hash table using the unordered_map or 
unordered_set containers from the C++ Standard Template Library (STL).
 These containers provide efficient lookup, insertion, and 
 deletion operations with an average complexity of O(1) for each operation.
  Here's a basic example of how to create and 
  use unordered_map and unordered_set:
*/

#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <string>

using namespace std;

// int main() {
//     //Creating an unordered_map

//     unordered_map <string, int> hashMap;

//     //Inseting values into the map
//     hashMap["John"] = 23;
//     hashMap["Mary"] = 24;
//     hashMap["Peter"] = 25;

//     //Accessing the values
//     cout << "Age of John: " << hashMap["John"] << endl;
//     cout << "Age of Mary: " << hashMap["Mary"] << endl;
//     cout << "Age of Peter: "<< hashMap["Peter"] << endl;

//     //creating an unordered_set
//     unordered_set <int> hashSet;

//     //Inserting values into the set
//     hashSet.insert(10);
//     hashSet.insert(20);
//     hashSet.insert(30);

//     //checking if a value exists in the set
//     if(hashSet.find(20)!= hashSet.end()) {
//         cout << "20 is in the set" << endl;
//     }

//     //Inserting over the elements in the set
//     cout << "Elements in the set: ";
//     for(int i : hashSet) {
//         cout << i << " ";
//     }
//     cout << endl;

//     return 0;
// }

/*
In this example, unordered_map is used to create a hash map where each key is 
associated with a value. 
unordered_set is used to create a hash set which stores unique elements.
You can use various operations like insert, find, erase, etc., 
to manipulate these data structures.

Remember to include the necessary headers <unordered_map> and <unordered_set> 
and use the namespace std to access the STL classes and functions.

*/

int main() {
    unordered_map<string, int> hashMap;
    unordered_set<int> hashSet;

    // Taking user input for unordered_map
    string name;
    int age;

    cout << "Enter name and age (e.g., John 23): ";
    cin >> name >> age;
    hashMap[name] = age;

    // Taking user input for unordered_set
    int element;

    cout << "Enter elements for the set (separated by spaces, e.g., 10 20 30): ";
    while (cin >> element) {
        hashSet.insert(element);
    }

    // Accessing and displaying values in unordered_map
    cout << "Age of " << name << ": " << hashMap[name] << endl;

    // Checking if a value exists in the unordered_set
    if (hashSet.find(20) != hashSet.end()) {
        cout << "20 is in the set" << endl;
    }

    // Displaying elements in the unordered_set
    cout << "Elements in the set: ";
    for (int i : hashSet) {
        cout << i << " ";
    }
    cout << endl;

    return 0;

//here the order was in reverse order beacause it goes in a stack and the top person gets popped first and that's how it gets reverse printed.