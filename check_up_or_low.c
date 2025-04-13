#include<stdio.h>
int main () {
    char ch;
    printf("Enter any English alafabet:-");
    scanf("%c", &ch);
    if(ch >= 'a' && ch <= 'z'){
        printf("lower case");
    }
    else if(ch >= 'A' && ch <= 'Z') {
        printf("upper case");
    }
    else{
        printf("Not a English no");
    } return 0;
}