#include<stdio.h>
int main () {
    int n=2;
    //printf("enter size of the arrey");
    //scanf("%d",&n);
    int a[n];
    int s=0;
    printf("Enter no:");
    for(int i=0;i<n;i++)
        scanf("%d", &a[i]);
//1
// for ( int i = 0; i < n; i++)
// {
//     s=s+a[i];
// } printf("sum of product :- %d",s);
// 2
int i,s=1;
for(i=0;i<n;i++)
s=s*a[i];
//3

    // printf("\n Array");
    // for(int i=0;i<n;i++)
    //     printf("%d %f",a[i]);


}