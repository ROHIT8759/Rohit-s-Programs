# include<stdio.h>
//smallest number
int main() {
    int a , b;
    printf("enter no A-");
    scanf("%d", &a);

    printf("enter no B-");
    scanf("%d", &b);

    if(a > b) {
        printf("smallest number- %d", b);
    } 
    else{
        printf("smallest number- %d", a);
    }  
     return 0;
}