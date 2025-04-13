//7. Input a character and change its case. (lowercase to uppercase and vice versa).


#include<stdio.h>
int main () {
    char ch;
    printf("Enter any Alfabete:-");
    scanf("%c", &ch);
    if(ch>=65 && ch<=90){
        printf("In uppercase %c", ch+32);
    } 
    else if (ch>=97 && ch<=122){
        printf("In lowercase %c", ch-32);
    } 
    else
        printf("not a valide input...");
    
}