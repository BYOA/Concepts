#include <iostream>

using namespace std;

void PassByAddress (int *p, int v);

int main ()
{
    cout << "This program is a test with pointers via function passing, initalization and other things.\n";

    cin.ignore ();


    int *ptr, *ptr1; //declaration of 2 ptrs

    int value = 8;
    int value1 =10;

    ptr = &value;
    ptr1 = &value1;

    cout << "The memory address of the value is (before passing): " << &value << '\n';
    cout << "The value that this holds is (before passing): " << value << '\n';
    cout << endl;
    PassByAddress(ptr, value);
    cout << endl;
    cout << "The memory address of the value is (after passing): " << &value << '\n';
    cout << "The value that this holds is (after passing): " << value << '\n';
    cout << endl << endl;
    cin.ignore();
    cout << "The memory address of the value is before passing): " << &value1 << '\n';
    cout << "The value that this holds is (before passing): " << value1 << '\n';
    cout << endl;
    PassByAddress(ptr1, value1);
    cout << endl;
    cout << "The memory address of the value is (after passing): " << &value1 << '\n';
    cout << "The value that this holds is (after passing): " << value1 << '\n';
    cout << endl << endl;

   return 0;
}


void PassByAddress (int *p, int v)
{
    v = 869;

    *p =31;
    cout << "The value the pointer holds is (memory address it holds): "  << p << '\n';
    cout << "The value of the memory address the pointer points to is now: " << *p << '\n';

    cout << "The memory address of the value when passed to a function is now: " << &v << '\n'; //different memory address as 
                                                                                                //passing by value results in a copy 
                                                                                                //of the argument
    
    cout << "The value that copied arugment holds is: " << v << '\n'; //unless the value is returned, the copied arugment will not change
                                                                      //the value of the actual object


}
