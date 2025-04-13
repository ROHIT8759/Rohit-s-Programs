#include<stdio.h>
int main (){
int x,y,P;
printf("Enter x and y number :- ");
scanf("%d %d", &x,&y);
P=x*y;
while(x!=y){
if(x>y)
    x=x-y;
else
    y=y-x;
}
printf("GCD= %d\n",x);
printf("LCM=%d\n",P/x);
}