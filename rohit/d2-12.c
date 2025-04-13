//12. Solve a given quadratic equation. [Without imaginary roots].


#include<stdio.h>
#include<math.h>
	int main () {
		float a,b,c,d,e,f,g,y;
		printf("enter A:- ");
		scanf("%f", &a);
		
		printf("enter b: ");
		scanf("%f", &b);
		
		printf("enter c: ");
		scanf("%f", &c);
		
		y=sqrt((b*b)-4*(a*c));
		
		if(y>0) {
			d=((-b)/(2*a));
			e=(y/(2*a));
			f=(d+e);
			g=(d-e);
			
		printf("the two roots are %f %f", f,g);
		}
		else {
			printf("the equation is unsolvable");
		}
	}