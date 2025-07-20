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

    std::cout<<"Choose your preferred searching algorithm :\n1.Linear Search\n2.Binary Search\nYour Choice : ";
    std::cin>>choice;
    int result = selection(size, arr, element, choice);
//calling a function from the header
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
