#include <stdio.h>

using namespace std;

struct change {
  int number;
 };

 typedef change NumberChange;

 void PassByReference (NumberChange *n);

int main ()
{
  NumberChange number1;
  number1.number = 7;

  NumberChange *ptr1 = &number1;

  printf("The value of number1 before function passing = %d\n", number1.number);
  printf("The value of ptr1 before function = %d\n",ptr1->number);

    PassByReference(ptr1);

    printf("The value of number1 after function passing = %d\n", number1.number);
    printf("The value of ptr1 after function passing = %d\n",ptr1->number);

    return 0 ; // successfully ran program
}


 void PassByReference (NumberChange *n)
 {
  n->number = 235;

 }
