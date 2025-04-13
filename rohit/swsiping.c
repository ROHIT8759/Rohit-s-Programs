// #include<stdio.h>
// #include<string.h>
// void swping (int *i,int *j) {
// }
#include<stdio.h>
int main()
{
    int size;
    printf("\n Enter the size:");
    scanf("%d",&size);
    int a[size];
    int i,s=0,p=1;
    printf("\n Enter the element:");
    for(i=0;i<size;i++)
          scanf("%d",&a[i]);
    for(i=0;i<size;i++)
       {
          s=s+a[i];
          p=p*a[i];
       }
    printf("\n Sum of element=%d",s);
    printf("\n Product of element=%d",p);
}