#include <iostream>
#include <array> //allows arrays not to decay when passed into functions

using namespace std;

char returnByValue (char c);
int& returnByReference (array<int, 25> &array, int length);
char* returnByAddress (int size);
char initalizeDynamicArray (char *array, int size);


int main ()
{

    cout << "Returning value in different ways.";
    cin.ignore();

    system("CLS");
    cout << "1. Return by value.\n\n";
    char newline = '\n';

    char character = 'n';
    cout << character << newline;

    cout <<  returnByValue (character) << newline;

    cin.ignore();
    system("CLS");
    cout << "2. Return by reference.\n\n";
    array<int, 25> array; //this array won't decay when passed in functions. This means the values won't change unless specified through references or pointers.

    returnByReference (array, 8);
    cout << array[8];

    cin.ignore();
    system("CLS");
    int length;
    cout << "2. Return by address.\n\n";

    cout << "Enter the size of the array >";
    cin >> length;
    char *dynamicArray = returnByAddress (length);

    initalizeDynamicArray(dynamicArray, length);

    delete[] dynamicArray;
    return 0;
}


char returnByValue (char c)
{
    return c = 'b';
}

int& returnByReference (array<int, 25> &array, int length)
{
    return array[length] = 28;
}

char* returnByAddress (int size)
{
    return new char [size];
}

char initalizeDynamicArray (char *array, int size)
{
    for (int x = 0; x < size ; x++)//rows
    {
        array[x] = '.';
    }

    for (int x = 0; x < size ; x++)//rows
    {
        cout << *(array + x) << ' '; //pointer arithemetic (*(array + x) == array[x] as normal arrays decay into pointers)
    }
}
