#include <iostream>

using namespace std;

void foo(int &value);

int main()
{
  int value = 16;
  int value2 = 8;
  int &valueref2 = value2;



    foo(value);
    int &valueref = value;
    cout << value << endl; //output is 22
    cout << valueref << endl;
    foo(valueref2);
    cout << valueref2 << endl; //output is 14
    cout << value2 << endl;

  return 0;
}


void foo(int &ref)
{
    int value = 6;
    ref +=value;
}
