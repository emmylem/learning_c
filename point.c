#include <stdio.h>

void change (int *a)
{
   *a = 50;
}

void new (int *b, int *c)
{
   *b = 10;
   *c = 11;
   return(*b + *c);
}

int main(void)
{
   int x = 10;
   int *y = &x;
   char about[50];
   int age[4];
   char school[50];
   char feel_about[100];

   printf("value of x before %d\n", x);
   printf("address of x before %p\n", &x);

   change(y);
   printf("value of x after %d\n", x);
   printf("address of x after %p\n", &x);

   printf("What is your name\n");
   scanf("%s\n", about);
   printf("How old are you\n");
   scanf("%d\n", age);
   printf("Wow thats nice, so which School do you go to ??\n");
   scanf("%s\n", school);
   printf("Thats great The CEO of FL0x went there, so how do you feel about this program\n");
   scanf("%s\n", feel_about);
    
   new(y);
   
   return (0);
}
