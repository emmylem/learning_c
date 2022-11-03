#include <stdio.h>

int main(void)
{
   int num = 20;
   int *wat;
   printf("value of num before is %d\n", num);
   wat = &num;
   *wat = 30;
   printf("value of num after is %d\n", num);
   

   printf("address of num is %p\n", &num);
   return (0);
}
