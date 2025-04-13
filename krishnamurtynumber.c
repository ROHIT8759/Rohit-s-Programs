#include<stdio.h>
int krishnamurtynumber(int n) {
    int i,r,p=0,f,t;
    t=n;
    while(n>0) {
        f=1;
        r=n%10;
        for(i=1;i<=r;i++){
                f=f*i;
        } 
        p=p+f;
        n=n/10;
    }
    if(t==p)
    {
        printf("The %d is a Krishnamurty number",t);
    }
    else
       printf(" The %d is not a Krishnamurty number",t); 

}
int main ()
{
    int k;
    printf("Enter the number for cha it is Krishnamurty number or not:");
    scanf("%d", &k);
    krishnamurtynumber(k);
    //return 0;
}