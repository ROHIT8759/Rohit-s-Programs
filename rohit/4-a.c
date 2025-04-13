/*4. Input two numbers and swap them –
a. Using a third variable
b. Without using a third variable

a. Using a third variable */

#include<stdio.h>

int main()
{
   int a,b,c;

printf("Enter a number A=");
scanf("%d", &a);
printf("Enter a number B=");
scanf("%d", &b);

   printf("Before swapping \nthe first number=%d \nthe second number=%d", a,b);

   c=a;
   a=b;
   b=c;

   printf("\nAfter swapping \nFIRST NUMBER=%d \nSECOND NUMBER=%d", a,b);
}
