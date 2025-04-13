#include<stdio.h>

void swap( int *a,int *b ) {
    int c = *a;
    *a = *b;
    *b = c;
    // int* x, y;
    // int* x= &a;


}
 int main() {
    int a,b;
    printf("Etner First number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Before swap A=%d B=%d\n",a,b);
    swap(&a,&b);
    printf("\nafter swap A=%d B=%d", a,b);

            return 0;

 }