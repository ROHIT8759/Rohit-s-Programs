//2. Find out the area and perimeter of a rectangle.

#include<stdio.h>
	int main (){
		int length, breath, a,b;
		printf("Enter the length of the rectangle: ");
		scanf("%d", &length);
		
		printf("Enter the breath of the rectangle: ");
		scanf("%d", &breath);
		a=2*(length+breath);
        b=length * breath;
		printf("the area of the rectangle is %d\n", b);
		printf("the perimeter of the triangle is %d", a);
	}