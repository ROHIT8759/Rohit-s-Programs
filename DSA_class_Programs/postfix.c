#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#define max_size 100
// stack
int stack[max_size];
int top = -1;
void push(int item)
{
    if (top == max_size)
    {
        printf("Stack overflow");
    }
    top++;
    stack[top] = item;
}
// POP
int pop()
{
    if (top == -1)
    {
        printf("Stack underflow\n");
    }
    int item = stack[top];
    top--;
    return item;
}
// OPERATION
int is_operator(char symbol)
{
    return (symbol == '+' || symbol == '-' || symbol == '*' || symbol == '/' || symbol == '^');
}
int evaluter(char *expression)
{
    int i = 0;
    char symbol = expression[i];
    int operand_1, operand_2, result;
    while (symbol != '\0')
    {
        if (isdigit(symbol))
        {
            int num = symbol - '0';
            push(num);
        }
        else if (is_operator(symbol))
        {
            operand_2 = pop();
            operand_1 = pop();
            switch (symbol)
            {
            case '+':
                result = operand_1 + operand_2;
                break;
            case '-':
                result = operand_1 - operand_2;
                break;
            case '*':
                result = operand_1 * operand_2;
                break;
            case '/':
                result = operand_1 / operand_2;
                break;
            case '^':
                result = (int)pow(operand_1, operand_2);
                break;
            }
            push(result);
        }
        i++;
        symbol = expression[i];
    }
    result = pop();
    return result;
}
// main function
int main()
{
    char expression[max_size];
    printf("Enter postfix expression : ");
    fgets(expression, sizeof(expression), stdin);
    int result = evaluter(expression);
    printf("Result= %d \n ", result);
    return 0;
}