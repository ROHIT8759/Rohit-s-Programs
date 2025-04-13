#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* link;
};

struct Node* top = NULL;

void push(int data)
{
    struct Node* tem = (struct Node*)malloc(sizeof(struct Node));
    if (tem == NULL)
    {
        printf("\nHeap Overflow");
        exit(1);
    }
    tem->data = data;
    tem->link = top;
    top = tem;
}

int isEmpty()
{
    return top == NULL;
}

int peek()
{
    if (!isEmpty())
        return top->data;
    else
    {
        printf("\nStack Underflow");
        exit(1);
    }
}

void pop()
{
    struct Node* tem;
    if (top == NULL)
    {
        printf("\nStack Underflow");
        exit(1);
    }
    else
    {
        tem = top;
        top = top->link;
        tem->link = NULL;
        free(tem);
    }
}

void display()
{
    struct Node* tem;
    if (top == NULL)
    {
        printf("\nStack Underflow");
        exit(1);
    }
    else
    {
        tem = top;
        while (tem != NULL)
        {
            printf("%d -> ", tem->data);
            tem = tem->link;
        }
    }
}

int main()
{
    int choice, data;

    while (1)
    {
        printf("\n1. Push");
        printf("\n2. Pop");
        printf("\n3. Peek");
        printf("\n4. Display");
        printf("\n5. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nEnter data to push: ");
            scanf("%d", &data);
            push(data);
            break;
        case 2:
            pop();
            break;
        case 3:
            printf("\nTop element is %d\n", peek());
            break;
        case 4:
            display();
            break;
        case 5:
            exit(0);
        default:
            printf("\nInvalid choice! Please enter a valid choice.");
        }
    }

    return 0;
}