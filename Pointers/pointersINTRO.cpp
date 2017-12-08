#include <iostream>


using namespace std;

/* pointers hold a memory address as its value (or a null address). derferencing points to the value of the memory address that the pointer holds.
Pointers have their own unique memory address which can be accessed by &*ptrvariablename* */

int main ()
{
        int number; //number is declared
    number = 7;  //number is intialised as 7

    int *ptr; //ptr is declared.


    cout << "This number is: " << number << endl;
    cout << "The memory address of number is: " << &number << endl;


    ptr = &number; //ptr is initalized with number's memory address. The value it holds is number's memory address.
    cout << endl;



    cout << "The memory address that the pointer ptr points(refers) to is: " << ptr << endl; //i.e &number
    cout << "The memory address of ptr is: " << &ptr << endl; //i.e ptr's own memory address
    cout << "The value that the pointer ptr refers(points) to is: " << *ptr << endl; //i.e number.

    cout << endl;

    *ptr =6890;

     cout << "Number is now: " << number << endl;
    cout << "The memory address of number is still: " << &number << endl;

    cout << endl;

    cout << "The memory address that the pointer ptr points to is still: " << ptr << endl;
    cout << "The memory address of ptr is still: " << &ptr << endl;
    cout << "The value that the pointer ptr points to is: " << *ptr << endl;
}
