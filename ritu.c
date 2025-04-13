//INSERT A NEW ELEMENT AT THE END 
#include <stdio.h>
int main ()
{
    int size,new,i;
    printf("Enter the size=");
    scanf("%d",& size);
    int a[size];
    printf("\nEnter the elements of the list:");
    for(i=0; i<size; i++)
    {
        scanf("%d",&a[i]);
    }
    size = size+1;
    printf("\nEnter the new element=");
    scanf("%d",&new);
    a[size-1]= new ;
    for (i=0;i<size;i++)
    {
        printf("%d",a[i]);
    }
}