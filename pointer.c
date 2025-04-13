#include<stdio.h>
int main () {
    int a=2000;
    int *b=&a;
    printf("\na= %d",a);
    printf("\n&a= %d",&a);
    printf("\nb= %d",b);
    printf("\n*b= %d",*b);
}