#include<stdio.h>
int main ( ) {
    int marks;
    printf("Enter Marks:-");
    scanf("%d", &marks);
    if(marks > 30 && marks < 50) {
        printf("pass\n");
        printf("Grate c\n");
    } 
    else if (marks < 50 && marks >30)
    {printf("pass\n");
    printf("geat c\n");
    }
     else if (marks < 70 && marks > 50)
    {
      printf("pass\n");
      printf("grate b\n");
    } 
    else if (90 > marks && marks > 70){
        printf("pass\n");
        printf("grate A\n");
    } 
    else if(marks > 90 && marks < 100){
        printf("pass\n");
        printf("great A+\n");
    }
     else{
        printf("not A valide value");
    } return 0;
    
    
}