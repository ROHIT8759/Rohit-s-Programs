#include<stdio.h>
int main(){
    int a,b;
    char c;    
    printf("Enter first number:");
    scanf("%d", &a);
    printf("Enter second number:");
    scanf("%d", &b);
    printf("Enter operator:");
    scanf(" %c", &c);    
    int l;
    printf("l=%d%c%d", a, c, b);
    printf("\n%d",l);
    return 0;
}