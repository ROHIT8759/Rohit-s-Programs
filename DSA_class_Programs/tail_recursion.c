#include<stdio.h>
int factorial (int n, int a){
    if(n==0){
        return a;
    } else {
        return factorial(n-1,n *a);
    }

}
int main ( )
{
    int result = factorial(5, 1);
    printf("Factrial =%d\n", result);
    return 0;

}