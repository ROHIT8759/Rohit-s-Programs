#include<stdio.h>
int main ()
{
    int n, i,j,arr[10];
    printf("Enter a number ");
    scanf("%d", &arr[5]);
   
    printf("%d\n", arr[5]);
    for(i=0; i<10; i++) {
        printf("%d\n", &arr[i]);
    }
}