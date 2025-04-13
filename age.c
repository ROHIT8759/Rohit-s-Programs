# include<stdio.h>
int main () {
    int age;
    printf("enter Agr:-");
    scanf("%d", &age);
    if(age >= 18) {
       printf("He/She is adult \n");
       printf("He/She can give vote \n");
       printf("He/She can drive car \n");
        }
    else if (age <18 && age > 12) {
        printf("Teenager \n");
    }
      
     else{
        printf("He/She Child \n");
        }
        printf("Thank you for using ME(ROHIT KUMAR KUNDU) \n");
    return 0;
}