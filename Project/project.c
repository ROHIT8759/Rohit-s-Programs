				// 	//NAME- ROHIT KUMAR KUNDU
				// //	PROGRAM- B.TECH IN CSE
				// 	ID- 2311200001279
				// 	SEC- 04	  ROLL NO- 03 
				// 	SEMESTER-1 
				// 	YEAR-2023-2027
				// 	SUBJECT-C LANGUEAGE ASSIGNMENT

//Q.1> Find the largest and smallest amoung three numbers supplied by user.

#include<stdio.h>
int main()
{
    int a,b,c,larg,small;
    printf("Enter the value of a :");
    scanf("%d",&a);
    printf("Enter the value of b :");
    scanf("%d",&b);
    printf("Enter the value of c :");
    scanf("%d",&c);
    
    larg=a>b?(a>c?a:c):(b>c?b:c);
    
    small=a<b?(a<c?a:c):(b<c?b:c);
    printf("Largest number is %d and  Smallest number is %d",larg,small);
    return 0;
}

// Output :

(i)
Enter the value of a :2
Enter the value of b :3
Enter the value of c :4
Largest number is 4 and Smallest number is 2

(ii)
Enter the value of a :500
Enter the value of b :300
Enter the value of c :100
Largest number is 500 and Smallest number is 100

//Q.2> Check whether an input year is a leap year or not.

#include<stdio.h>
int main()
{
    int y;
    printf("\n Enter the year y :");
    scanf("%d",&y);
    
    if(y%100==0)
      {
        if(y%400==0)
           printf("\n Leap year");
        else
           printf("\n Not leap year ");
           
      }
    else
      {
        if(y%4==0)
           printf("\n Leap year");
        else
           printf("\n Not leap year");
      }
    return 0;
    
}

// Output :

(i) Enter the year y :2100

 Not leap year
 
(ii)
 Enter the year y :2020
 
 Leap year




//Q.3> Input a number and find the sum of its digits using while/do-while loop.

#include<stdio.h>
int main()
{
   int n,d,s=0;
   printf("Enter the number n: ");
   scanf("%d",&n);
   
   while(n>0)
     {
         d=n%10;
         s=s+d;
         n=n/10;
     }
    printf("Sum of digits is %d \n",s);
    return 0;
}

// Output 

Enter the number n: 234
Sum of digits is 9


//Q.4> Input a number and revers it using while/do-while loop.

#include<stdio.h>
int main()
{
    int n,r=0,d;
    printf("Enter the number n:");
    scanf("%d",&n);
    
    while(n>0)
     {
       d=n%10;
       r=r*10+d;
       n=n/10;
     }
    printf("Revers number is %d",r);
}


// Output

Enter the number n:567
Revers number is 765

//Q.5> Input a number and check if it is a prime no or not.

#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the number n:");
    scanf("%d",&n);
    int c=0;
    for(i=2;i<=n/2;i++)
      {
          if(n%i==0)
           {
             c=c+1;
             break;
           }
      }
    if(c==0)
       printf("\n %d is prime no",n);
    else
        printf("\n %d is non-prime no",n);
    
}

// Output 

i. Enter the number n:7
   7 is prime no

ii. Enter the number n:84
    84 is non-prime no



//Q.6> Input a number n and find its factorial using a user defined function long int fact(int)


#include<stdio.h>

long int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
       f=f*i;
    return f;
}
int main()
{
    int n,a;
    printf("Enter the number:");
    scanf("%d",&n);
    a=fact(n);
    printf("Factorial of %d is %d",n,a);
}


// Output

i. Enter the number:5
   Factorial of 5 is 120


//Q.7> Input a number and check if it a Krishnamurthy number.

#include <stdio.h>
int fact(int x)
{   
    int m=1,i;
    for (i = 1; i <= x; i++)
        m = m * i;
    return m;
}
int factsum(int y)
{
    int a, s=0;
    while (y != 0)
    { 
        a = y % 10;
        s = s+fact(a);
        y = y / 10;
    }
    return s;
}
void Krishnamurtynumber(int z)
{
    int f;
    f = factsum(z);
    if (z == f)
        printf("Krishnamurty number");
    else
        printf("Not krishnamurty number");
}
int main()
{
    int k;
    printf("Enter the number:");
    scanf("%d", &k);
    Krishnamurtynumber(k);
    return 0;
}


// Output

i. Enter the number:145
   Krishnamurty number

ii. Enter the number:120
    Not Krishnamurty number


/*Q.8>Find the sum of first n prime numbers using as user defined function to check for prime. 
Input the value of n from the user. */

#include <stdio.h> 
 
int Prime(int num) { 
if (num <= 1) { 
return 0; 
} 
 
for (int i = 2; i * i <= num; ++i) { 
if (num % i == 0) { 
return 0; 
} 
} 
 
return 1; 
} 
 
int main() { 
int n; 
 
printf("Enter the value of n: "); 
scanf("%d", &n); 
 
int sum = 0; 
int a = 0; 
int i = 2; 
 
while (a < n) { 
if (Prime(i)) { 
sum = sum + i; 
++a; 
} 
++i; 
} 
 
printf("Sum of first %d prime numbers is: %d\n", n, sum);

}


//Output


Enter the value of n: 5


Sum of first 5 prime numbers is: 28




/*Q.9> . Input a limit n and print all prime fibonacci numbers up to n using a user defined 
function int prime(int) which returns a 1 if the argument is a prime or else 0.*/



#include <stdio.h>

int Prime(int num)
{
    if (num <= 1)
    {
        return 0;
    }
    int i;
    for (i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
void PrimeFibonaccinumber(int n)
{
    int a = 0, b = 1, c;
    while (a <= n)
    {
        if (Prime(a))
        {
            printf("%d ", a);
        }
        c = a + b;
        a = b;
        b = c;
    }
}

int main()
{
    int range;
    printf("Enter the Range:- ");
    scanf("%d", &range);
   

    printf("Prime Fibonacci numbers up to %d are: ", range);
    PrimeFibonaccinumber(range);
    return 0;
} 



// Output

i. Enter the range:-5
   Prime Fibonacci number up to 5 are:2 3 5


Q.10> Input two numbers a and b and calculate a^b using function.

#include<stdio.h>
#include<math.h>
int result(int x,int y)
  {
    int s;
    s=pow(x,y);
    return s;
  }
int main()
 {
    int a,b;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    int r=result(a,b);
    printf("\n Result is %d",r);
 }



// Output

i. Enter the value of a:3
   Enter the value of b:2

   Result is 9

ii. Enter the value of a:5
   Enter the value of b:9

   Result is 1953125


Q.11> Input two numbers and find their GCD using function.

#include<stdio.h>
int gcd(int a,int b)
{
    int s;
    if(a>b)
       s=b;
    else
       s=a;
    while(a%s!=0 || b%s!=0)
      {
         s=s-1;
      }
    return s;
}
int main()
{
    int a,b;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    int gc=gcd(a,b);
    printf("\n GCD of %d and %d is %d",a,b,gc);
}

// Output

i. Enter the value of a:6
   Enter the value of b:9

   GCD of 6 and 9 is 3

ii.  Enter the value of a:25
    Enter the value of b:55

   GCD of 25 and 55 is 5



Q.12> Swap two numbers using call by address.


#include<stdio.h>

void swap( int *a,int *b ) 
 {
    int  c = *a;
        *a = *b;
        *b =  c;
 }
int main() 
 	{
    int a,b;
    printf("Etner First number: ");
    	scanf("%d", &a);
    printf("Enter second number: ");
    	scanf("%d", &b);

    printf("Before swap A=%d B=%d\n",a,b);
    	swap(&a,&b);
    printf("\nafter swap A=%d B=%d", a,b);
    	return 0;
 }


// Output

i. Enter first number:2
   Enter second number:3
   Before swap A=2 B=3

   After swap A=3 B=2


//Q.13> Find the sum and product of two numbers using call by address

#include<stdio.h>
int main()
{
    int a[2];
    int i,s=0,p=1;
    printf("\n Enter the element:");
    for(i=0;i<2;i++)
          scanf("%d",&a[i]);
    for(i=0;i<2;i++)
       {
          s=s+a[i];
          p=p*a[i];
       }
    printf("\n Sum of element=%d",s);
    printf("\n Product of element=%d",p);
}


// Output

i. Enter the element:3 2

sum of element=5
product of element=6


Q. 14> Input two sides of a rectangle and find their area and perimeter using call by address.

#include <stdio.h>

void Rectangle( float length, float width,float *area, float *perimeter)
{
   *area = length * width;
   *perimeter = 2 * (length + width);
}
int main()
{
   float length, width, area, perimeter;
   printf("Enter the length of the rectangle: ");
   scanf("%f", &length);
   printf("Enter the width of the rectangle: ");
   scanf("%f", &width);
   Rectangle(length, width, &area, &perimeter);
   printf("Area of the rectangle: %.2f\n", area);
   printf("Perimeter of the rectangle: %.2f\n", perimeter);
   return 0;
}


// Output

i. Enter the length of rectangle:9
   Enter the width of rectangle:
   Area of rectangle:72.00
   Perimeter of rectangle:34.00



15. Find the lcm and HCF of two numbers using call by address.


#include <stdio.h>

int calculateHCF(int a, int b)
{
   while (a != b)
    {
      if (a > b)
         a -= b;
      else
         b -= a;
    }
    return a;
}
int calculateLCM(int a, int b) 
{
   return (a * b) / calculateHCF(a, b);
}
void findLCMandHCF(int num1, int num2, int *lcm, int *hcf) 
{
   *hcf = calculateHCF(num1, num2);
   *lcm = calculateLCM(num1, num2);
}
int main() 
{
   int num1, num2, lcm, hcf;
   printf("Enter two numbers: ");
   scanf("%d %d", &num1, &num2);
   findLCMandHCF(num1, num2, &lcm, &hcf);
   printf("LCM of %d and %d is %d\n", num1, num2, lcm);
   printf("HCF of %d and %d is %d\n", num1, num2, hcf);
   return 0;
}


// Output

i. Enter two number:3 6
 
   LCM of 3 and 6 is 6
   HCF of 3 and 6 is 3




//Q.16(a). print the pattern up to n no of lines
                      *
                      **
                      ***
                      ****
#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter the row n :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
     {
        for(j=1;j<=i;j++)
          {
            printf("*");
          }
        printf("\n");
     }
}


// Output

Enter the row n :4
           *
           **
           ***
           ****



//Q.16(b). print the pattern up to n no of lines
                      1
                      12
                      123
                      1234
#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter the row n :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
     {
        for(j=1;j<=i;j++)
          {
            printf("%d",j);
          }
        printf("\n");
     }
}



// Output

Enter the row n :4
           1
           12
           123
           1234



//Q.16(c). print the pattern
               *
              ***
             *****
            *******


#include<stdio.h>
int main()
{
	int n,i,j,k;
	printf("Enter the row n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		printf(" ");
		
		for(k=1;k<=2*i-1;k++)
		{
			printf("*");
		}
		
		printf("\n");
	}
}



// Output

Enter the row n :4
               *
              ***
             *****
            *******


//Q.16(d). Print the following patterns up to n no. of lines:

                A
               ABC
              ABCDE
             ABCDEFG


#include <stdio.h>
int main() 
{
  int n, i, j;
  printf("Enter the number of lines: ");
  scanf("%d", &n);
  for (i = 1; i <= n; i++) 
   {
        for (j = 1; j <= n - i; j++) 
        {
           printf(" ");
        }
        char ch = 'A';
        for (j = 1; j <= 2 * i - 1; j++)
        {
           printf("%c", ch);
           ch++;
        }
        printf("\n");
    }
   return 0;
}


// Outpur

i. Enter the number of lines:4

                  A
                 ABC
                ABCDE
               ABCDEFG