#include <iostream>



/*Dynamic allocation allows for programs to request memory from the OS when needed.
This memory does not come from the stack, but instead from the heap, which is a larger pool of memory.
This can be gigabytes in size (for modern systems)*/



int main ()
{
    int *ptr = new (std::nothrow) int; // dynamically allocate an integer and assign the address to ptr so we can access it later
   
    if (!ptr) // handle case where new returned null
    {
        // Do error handling here
        std::cout << "Could not allocate memory";
    }

    std::cout << &ptr << std::endl;
    std::cout << *ptr << std::endl;

    std::cout << std::endl;

    *ptr = 7; // assign value of 7 to allocated memory

    std::cout << &ptr << std::endl;
    std::cout << *ptr << std::endl;

    std::cout << std::endl;

    delete ptr; // return the memory pointed to by ptr to the operating system. ptr is now a dangling pointer.
    /*Dangling pointers: pointers that point to deallocated memory */

    std::cout << &ptr << std::endl;
    std::cout << *ptr << std::endl;

    std::cout << std::endl;

    /*The delete operator does not actually delete anything.
    It simply returns the memory being pointed to back to the operating system. */


    ptr = 0; // set ptr to be a null pointer (use nullptr instead of 0 in C++11)
    if(ptr) // As it is a null ptr (which is 0) it won't run as 0 is false.
        std::cout << "Hello.";


    return 0;

}





