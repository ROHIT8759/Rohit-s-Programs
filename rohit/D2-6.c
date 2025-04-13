//6. Input a number and find its absolute value.
#include<stdio.h>
int main() {
    int a;
    printf("Enter a number = ");
    scanf("%d", &a);
    if(a>=0)
        printf("The absolute value of |%d| is = %d ", a, a);
    else 
        printf("The Absolute value of |%d| is = %d", a,a*-1);
}