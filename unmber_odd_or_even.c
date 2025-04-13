#include<stdio.h>
void main() {
    int number;
    printf("Enter a number-");
    scanf("%d", &number);
     if(number>0) {
        printf("positive number\n");
        if(number % 2==0){
            printf("Even number\n");
        } else{ printf("Odd number\n");
        }
     }else{
        printf("Negitive number\n");
     }
}