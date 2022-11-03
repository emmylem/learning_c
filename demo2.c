#include <stdio.h>

void change(int *a)
{
   *a = 50;
}

int main(void)
{
   int num = 20;
   int *wat;
   printf("value of num before is %d\n", num);
   
   wat = &num;
   *wat = 30;
   printf("value of num after is %d\n", num);
   
   int num1 = 10;
   wat = &num1;
   printf("value of num1 before is %d\n", num1);
   change(wat);

   printf("value of mum1 after is %d\n", num1);

   printf("address of num is %p\n", &num);
   return (0);
}
