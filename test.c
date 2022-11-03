#include <stdio.h>

int foo(int a);

int main(void)
{
  int x;

   x = 10;

   foo(x);
   printf("The number is %d\n", x);
 
   return (0);
}

int foo(int a)
{
   a = 20;

   return (a);
}
