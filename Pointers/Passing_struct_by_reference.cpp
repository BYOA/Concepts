#include <stdio.h>

using namespace std;

struct change {
  int number;
 };

 typedef change NumberChange; //type def alias.

/*object.member
pointer->member*/

void PassByReference (NumberChange *n);

int main ()
{
  NumberChange value;
  value.number = 7;

  NumberChange *ptr = &value;

  printf("The value of number1 before function passing = %d\n", value.number);
  printf("The value of ptr1 before function = %d\n",ptr->number);

  PassByReference(ptr);

  printf("The value of number1 after function passing = %d\n", value.number);
  printf("The value of ptr1 after function passing = %d\n",ptr->number);

  return 0 ; // successfully ran program
}


 void PassByReference (NumberChange *n)
 {
  n->number = 235;

 }
