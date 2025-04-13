
//FACTORIAL
#include<stdio.h>
int main()
{
	int n,i;
	printf("\nEnter the number=");
	scanf("%d",&n);
	int f=1;
	
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	printf("\nFactorial of %d is %d",n,f);
}