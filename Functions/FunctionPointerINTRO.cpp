#include <iostream>


using namespace std;


int foo();
int boo (int n);


int main ()
{
    cout << reinterpret_cast<void*>(foo); // Tell C++ to interpret function foo as a void pointer
    int (*fcnPtr)() = foo;
    cout << endl << reinterpret_cast<void*>(fcnPtr);
    
    cout << endl << foo();
    cout << endl << (*fcnPtr)();  //explict dereference
    cout << endl << fcnPtr(); //implcit dereference

    int (*fcnPtr2)(int) = boo; //parameters and return type of function pointer must equal the function's return type and parameters
    cout << endl << endl << boo(10);
    cout << endl << fcnPtr2(8);
    cout << endl << (*fcnPtr2)(567);
    /*remember: 
    function pointers hold the memory address of a function. 
    Assinging or initalizing a function pointer requires the parameters and return types to be the same as the function you want the
    address of. 
    You don't need to use the address of operator as implict conversion to the memory address occurs with functions.
   You can call the function normal through the function pointer via explict or implicit dereference
   function pointers can be an arugment.*/
    
    


    return 0;

}


int foo()
{
    return 5;
}

int boo (int n)
{
    return n;
}
