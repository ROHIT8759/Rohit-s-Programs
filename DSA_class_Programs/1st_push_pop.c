#include<stdio.h>
#include<stdlib.h>
#define size 5
int i, top=-1,arr[size];
void push();
void pop();
void display();

int main()
{

int choice;
while(1)
{
	printf("give the below inpit value\n");
	printf("\n1.push \n2.pop \n3.display \n4.exit");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			push();
			break;
	    case 2:
	    	pop();
	    	break;
	    case 3:
		display();
		break;
		case 4: 
		   exit(0);
		   break;
		default:
		   printf("invalid choice"); 
	}
}
}
void push()
{
int x;
if(top==size-1)
{
printf("the stack is full");
}
else
{
	printf("Enter the value to be inserted : ");
	scanf("%d",&x);
	arr[++top]=x;
}
}

void pop()
{
	if(top==-1)
	{
		printf("Empty");
	}
	else
	{
		printf("The poped value = %d",arr[top--]);
	}
}
void display()
{
	int i;
	if(top==-1)
	printf("Stack is empty");
	else
	{
		printf("The elements are : ");
		for(i=top;i>=0;i--)
		{
			printf("\n%d",arr[i]);
		}
	}
}