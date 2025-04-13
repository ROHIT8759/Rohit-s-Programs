//10. Check Whether an input year is a leap year or not.....

#include<stdio.h>
int main() {
    int y;
    printf("Enter a Year:- ");
    scanf("%d", &y);
    if(y%100==0){
        if(y%400==0) 
            printf("leap Year\n");
        else
             printf("Not a leap Year\n");
    }
    else{
        if(y%4==0)
            printf("leap Year\n");
        else 
            printf("not a leap Year\n");
    }
}