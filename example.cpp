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

    if(result==-1){
     std::cout<<"The element is not present in the array";
    }
    else if(result==-2){
     std::cout<<"Invalid selection of searching mechanism";
    } 
    else{
     std::cout<<"The element is at the "<<result<<" index of the array";
    } 
    return 0;
}
