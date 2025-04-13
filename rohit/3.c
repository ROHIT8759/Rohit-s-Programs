 //3. Input three decimal numbers and find their sum and average.

#include<stdio.h>
	int main() {
		float a,b,c,s,A;
		
		printf("Enter A: ");
		scanf("%f", &a);
		
		printf("Enter B: ");
		scanf("%f", &b);
		
		printf("Enter C: ");
		scanf("%f", &c);
		
		s=a+b+c;
        A=s/3;
		printf("The sum of three number is %f\n", s);
		printf("The avarage of three number is %f\n", A);
	}