//b. Without using a third variable

#include <stdio.h>

int main()
{
   int a,b;

   printf("enter the value of A-");
   scanf("%d", &a);
   
   printf("enter the value of B-");
   scanf("%d", &b);

   a=a+b;
   b=a-b;
   a=a-b;

   printf("After swapping \n");
   printf("value of A is : %d \n", a);
   printf("value of B is : %d\n", b);
}