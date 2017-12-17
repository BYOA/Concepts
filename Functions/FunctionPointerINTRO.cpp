#include <iostream>


using namespace std;


int foo();



int main ()
{
    cout << reinterpret_cast<void*>(foo); // Tell C++ to interpret function foo as a void pointer
    int (*fcnPtr)() = foo;
    cout << endl << reinterpret_cast<void*>(fcnPtr);


    return 0;

}


int foo()
{
    return 5;
}
