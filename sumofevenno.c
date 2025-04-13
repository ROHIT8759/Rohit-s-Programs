#include<stdio.h>
int main () {
    int i,max_value,sum;
    printf("Enter range no ");
    scanf("%d",&max_value);
    for(i=0; i<=max_value;i++)
    {
        if(i%2==0){
            sum=sum+i;
        }
        else {

        }
    }
    printf("%d", sum);
}