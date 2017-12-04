#include <iostream>



/*Dyamic allocation allows for programs to request memory from the OS when needed.
This memory does not come from the stack, but instead from the heap, which is a larger pool of memory.
This can be gigabytes in size (for modern systems)*/



int main ()
{
    int *ptr = new int; // dynamically allocate an integer and assign the address to ptr so we can access it later


    std::cout << &ptr << std::endl;
    std::cout << *ptr << std::endl;

    std::cout << std::endl;

    *ptr = 7; // assign value of 7 to allocated memory

    std::cout << &ptr << std::endl;
    std::cout << *ptr << std::endl;

    std::cout << std::endl;

    delete ptr; // return the memory pointed to by ptr to the operating system

    std::cout << &ptr << std::endl;
    std::cout << *ptr << std::endl;

    std::cout << std::endl;

    /*The delete operator does not actually delete anything.
    It simply returns the memory being pointed to back to the operating system.
    The operating system is then free to reassign that memory to another application (or to this application again later).
    Although it looks like we’re deleting a variable, this is not the case!
    The pointer variable still has the same scope as before, and can be assigned a new value just like any other variable.*/


    ptr = 0; // set ptr to be a null pointer (use nullptr instead of 0 in C++11)
    if(ptr) // As it is a null ptr (which is 0) it won't run as 0 is false.
        std::cout << "Hello.";


    return 0;

}

