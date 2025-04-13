/*Q.8> Find the sum of first n prime numbers using as user defined function to check for prime.
Input the value of n from the user.*/

#include <stdio.h>
int prime(int n)
{
   int i, j, sum = 0;
   for (j = 2; j <= n; j++)
   {
      if (n > 1)
      {
         for (i = 2; i < n; i++)
         {
            if (n % i == 0)
            {
               // not prime number
            }
            else
               return; // prime number
         }
      }
   }
   sum = sum + n;
   printf("The sum of first %d prime number is = %d", n, sum);
}
int main()
{
   int n;
   printf("Enter the number- ");
   scanf("%d", &n);
   prime(n);
}

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
            if(n%i==0){
            sum = sum + i;
            ++a;
            }
        }
        ++i;
    }

    printf("Sum of first %d prime numbers is: %d\n", n, sum);

    return 0;
}

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

#include <stdio.h>

void Rectangle(float length, float width, float *area, float *perimeter)
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

int main()
{
   int n, i;
   int c = 0;
   printf("Enter the value = ", n);
   scanf("%d", &n);
   
   for (i = 2; i <= n / 2; i++)
      if (n % i == 0)
      {
         c = c + 1;
         if (c == 1)
            break;
      }

   if (c == 0)
      printf("\n%d is  prime number", n);
   else
      printf("\n%d is non prime number", n);
   
}