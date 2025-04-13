#include<stdio.h>
int main()
{
	int n,i,j,k;
	printf("\nEnter the value of n (odd number) : ");
	
	scanf("%d",&n);
	printf("\n Required pattern : \n\n");
	if(n%2==0)
	{
		printf("Input odd number");
		return 0;
	}
	for(i=1;i<=n/2+1;i++)
	{
		for(j=1;j<=(n/2+1)-i;j++)
		printf(" ");
		
		for(k=1;k<=2*i-1;k++)
		{
			printf("*");
		}
		
		printf("\n");
	}
	
	for(i=1;i<=n/2;i++)
	{
		for(j=1;j<=i;j++)
		printf(" ");
		
		for(k=1;k<=n-2*i;k++)
		{
		printf("*");
		} 
		printf("\n");
	}
}