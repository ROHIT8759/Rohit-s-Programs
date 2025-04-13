#include<stdio.h>
void fibonachenumber(int x) {
    int f=1,temp=0,s=0;
    for(int i=1; i<=x;i++){
        printf("%d ", temp);
        temp=f+s;
        s=f;
        f=temp;
    }
}
int main () {
    int n;
    printf("Enter a number :- ");
    scanf("%d",&n);
    fibonachenumber(n);
}
