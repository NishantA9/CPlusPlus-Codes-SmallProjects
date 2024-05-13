#include <iostream>

//the example uses bubble sort
void sort(int array[], int size){
    //size - 1 we dont want to compare  last element with anything
    for (int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - i - 1; j++){
            if(array[j] > array[j +1]){
                //ascending and descending <
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            } 
            }
    }
};

int main(){
    int array[] = {10,8,2,1,5,6,3,5,4,9,7};
    int size = sizeof(array) / sizeof(array[0]);
    sort(array, size);
    
    for (int element : array){
        std::cout << element << " ";
    }
    return 0;
}