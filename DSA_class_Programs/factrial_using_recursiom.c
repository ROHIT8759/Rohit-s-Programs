#include<stdio.h>
int factrial(int n){
    int value;
        if(n>=1){
        value=n*(factrial(n-1));
        
        }
        else
            return 1;
}
int main () {
    int f;
    printf("Enter the number for facrtial- ");
    scanf("%d", &f);
    factrial(f);
    printf("%d",factrial(f) );
}