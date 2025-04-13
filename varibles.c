# include<stdio.h>
// int main() {
//     int number = 22; 
//     int age = 14;
//     float price = 3.2;
//     char Email = " % ";
//     printf("number is %d \n", number);
//     printf("age is %d \n", age);
//     printf("final prise is %f \n", price);
//     printf("emnil is %c \n", Email);
//     return 0; }                                 //THIS IS ROHIT
#include<stdio.h>
int main()
{
int n,r=0,d;
printf("Enter the number n:");
scanf("%d",&n);
while(n>0)
{
d=n%10;
r=r*10+d;
n=n/10;
}
printf("Revers number is %d",r);
}