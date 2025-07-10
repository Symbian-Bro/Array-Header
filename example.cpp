#include <iostream>
#include "arrayheader.h"
//example program
int main() {
    int size,choice,element;
    std::cout<<"Enter the size : ";
    std::cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
     std::cin>>arr[i];
    } 
    std::cout<<"Enter the element : ";
    std::cin>>element;

    choice = 2; // 1 = linear search, 2 = binary search

    int result = selection(size, arr, element, choice);

    std::cout << "Result: " << result << std::endl;

    return 0;
}
