#include <iostream>

using namespace std;


void PassingByConstReference (const int &ref);
void Display (const int &ref);



int main ()
{
    int value = 8;
    int value2 = 9;
    const int value3 = 0;
    int &ref2 = value2;
    const int &constref = 8 + 3;

    PassingByConstReference (value); //non constant value
    PassingByConstReference (value2 +value); //2 non constant values
    PassingByConstReference (value3); //constant value
    PassingByConstReference (ref2); //constant reference
    PassingByConstReference (constref); //constant reference
    PassingByConstReference (7); //integer literal
    PassingByConstReference (1+1); // 2 integers literals


    return 0;
}




void PassingByConstReference (const int &ref)
{

    Display (ref);

}

void Display (const int &ref)
{
    cout << "The value is now: " << ref << endl << endl;

}

