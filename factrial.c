#include <stdio.h>

long int fact(int n)  //factrial defined
{
    int i, f = 1;
    for (i = 1; i <= n; i++)
    {
        f = f*i;
    }
    printf("%d", f);
}
int main()
{
    int n;
    printf("Enter Fact of number :- ");  // Enter factrial
    scanf("%d", &n); //take input
    fact(n);  
}


// void Prime(int num)
// { 
    
//    printf("sum of prime numbe= %d\n", sum);
//    printf("product of prime number %d \n", product );
// }
// int main () {
//     int n;
//     printf("Enter naumber -");
//     scanf("%d", &n);
//     Prime(n);

// }

