#include <iostream>

using namespace std;


void PassingByConstReference (const int &ref);
void Display (const int &ref);



int main ()
{
    int value = 8;
    int value2 = 9;
    int &ref2 = value2;
    const int &constref = 8 + 3;

    PassingByConstReference (value);
    PassingByConstReference (value2 +value);
    PassingByConstReference (ref2);
    PassingByConstReference (constref);
    PassingByConstReference (7);
    PassingByConstReference (1+1);


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

