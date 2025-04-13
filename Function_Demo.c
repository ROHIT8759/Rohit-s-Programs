#include<stdio.h>

void arithmeticOperations();
int main() {
    printf("This is a program that illustrates the use of function in increasing modularity and reusability of code.\n");
    int a, b;
    printf("Enter 2 no.s:");
    scanf("%d%d", &a, &b);
    arithmeticOperations(a, b);
    a = a + 1;
    b = b + 1;
    arithmeticOperations(a, b);

}
// This is a function to display the addition, subtraction, multiplication and division of the two numbers. This function
// will be used to illustrate the reusability feature. Whenever I call this function, it will print the result.
void arithmeticOperations(int a, int b) {
    printf("%d\n", a + b);
    printf("%d\n", a - b);
    printf("%d\n", a * b);
    printf("%d\n\n\n", a / b);
}
//void addition;
//void subtraction;