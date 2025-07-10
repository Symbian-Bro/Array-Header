This is a header file that can be used with your C++ programs. Pass the values such as size of the array, the array, the element user wants to find and the search function of user's choice. The array passed will get sorted automatically as there is a selection sorting algorithm within this file(If the user chooses binary search). Then the sorted array will be passed to the desired function.

How to use :
- Place this file inside your working directory
- Use #include "arrayheader.h" to add this file to the headers
- Pass all the neccessary values to the selection function

Return values :
- -1 if the element is not found
- -2 if the user's choice of searching mechanism is invalid
- All other values returned are the indices of the element you are searching for

Example implementation :

int index = selection(size, arr, element, choice);

    if(index != -1 && index != -2) {
        std::cout << "Element " << element << " found at index: " << index << "\n";
    } else if(index == -1) {
        std::cout << "Element " << element << " not found.\n";
    } else if(index == -2) {
        std::cout << "Invalid choice for search algorithm.\n";
    }