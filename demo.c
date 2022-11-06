#include <stdio.h>

int main(void)
{
   char a = 'h';
   char *ptr;
   ptr = &a;

   printf("address of a is %p\n", &a);
   printf("value of point ptr is %p\n", ptr);
   printf("correct value of ptr is %s\n", ptr);
   printf("value of a is %c\n", a);
   
   return (0);
}
