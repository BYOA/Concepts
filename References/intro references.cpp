#include <iostream>


using namespace std;


int main ()
{
    int value = 8;
    int a = 83;
    int &valueref = value;


    valueref= 10;

    cout << "The value object contains the integer value " << value << '\n';
    value++;
    cout << "The valueref value is " << valueref << '\n' << '\n';

    cout << "The memory address of value is " << &value << '\n';
    cout << "The memory address of valueref is " <<&valueref << '\n'; //same as value. valueref has a non-unique memory address 
                                                                        //as it is only another name to the value object.


    /*NOTES:

    *Refernces to non-const values can only be initalized with non-const l-values
    *Pointers can hold a null value(memory address) whist references can never be null
    *References cannot be changed to reference another variable. i.e. it can never be re-assigned

    Why? Because references act as an alias to another object or value.
    this means that there can never be a null memory address as copies the features of an object, including memory address.



    */
}
