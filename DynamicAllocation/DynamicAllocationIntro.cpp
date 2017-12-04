#include <iostream>

/*Dynamic allocation allows for programs to request memory from the OS when needed.
This memory does not come from the stack, but instead from the heap, which is a larger pool of memory.
This can be gigabytes in size (for modern computers)*/



int main ()
{
    int *ptr = new int; // dynamically allocate an integer and assign the address to ptr so we can access it later


    std::cout << &ptr << std::endl; // memory address. where it is stored in memory
    std::cout << *ptr << std::endl; //garbage value

    std::cout << std::endl;

    *ptr = 7; // assign value of 7 to allocated memory

    std::cout << &ptr << std::endl;  // same memory address.
    std::cout << *ptr << std::endl; //value is 7 when dereferenced.

    return 0;

}
