// #include<stdio.h>
// /*here a is a integer value and a store 7. "n" is a pointer that denoted "int *n". "p" can store any address   */
// void pointer (int *n){
//     printf("%d\n", n);     //it's store the address of a.
//     printf("%d\n", *n);   //It's print that value store in a.
//     printf("%x\n", &n);  // this print address in Hexadecimal number.;;
//     printf("%d\n", &n); // this print address of n.
//     }
// int main () {
//     int a=7, *n=&a;
//     pointer(n);
// }

// #include <stdio.h>
// int fact(int x)
// {   
//     int m=1,i;
//     for (i = 1; i <= x; i++)
//         m = m * i;
//     return m;
// }
// int factsum(int y)
// {
//     int a, s=0;
//     while (y != 0)
//     { 
//         a = y % 10;
//         s = s+fact(a);
//         y = y / 10;
//     }
//     return s;
// }
// void Krishnamurtynumber(int z)
// {
//     int f;
//     f = factsum(z);
//     if (z == f)
//         printf("Krishnamurty number");
//     else
//         printf("Not krishnamurty number");
// }
// int main( )
// {
//     int k;
//     printf("Enter the number:");
//     scanf("%d", &k);
//     Krishnamurtynumber(k);
//     return 0;
// }