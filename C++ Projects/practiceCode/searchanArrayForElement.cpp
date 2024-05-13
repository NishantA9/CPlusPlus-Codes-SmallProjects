#include <iostream>

int searchArray (int array[], int size, int element){
    for (int i = 0; i < size; i++){
        if (array[i] == element){
            return i;
        }
    }
    return -1; //element not found in the array
};

int main()
{
    int numbers[] = {0, 1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int index, mynum;

    std::cout << "Enter a number: ";
    std::cin >> mynum;

    index = searchArray(numbers, size, mynum);

    if(index != -1){
        std::cout << "The number " << mynum << " was found at index " << index << std::endl;
    }
    else{
        std::cout << "The number " << mynum << " was not found" << std::endl;
    }

    return 0;


}