#include<stdio.h>
int main () {
     //for( int i=100; i<999 ; i = i-1 ) {
       //  printf("%d\n", i);
    // }
    int a;
    a=65; 
     for(char ch = 'A'; ch <= 'z'; ch++ ){
         printf("%c\n", ch);
         printf("%d\n", a++);
         }
    
    return 0;
}