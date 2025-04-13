#include <stdio.h>
#include <stdlib.h>

struct cslinklist {
    int data;
    struct cslinklist *next;
};

typedef struct cslinklist node;
node *start = NULL;

node* getnode() {
    node *newnode;
    newnode = (node *)malloc(sizeof(node));
    printf("\nEnter data: ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    return newnode;
}



void createlist(int n) 
{
    int i;
    node *newnode, *temp;
    for (i = 0; i < n; i++) 
	{
        newnode = getnode();
        if (start == NULL) 
		{
            start = newnode;
            //temp = start;
        } else 
		{
            temp=start;
			while(temp -> next != NULL)
			temp = temp -> next;
			temp -> next = newnode;
        }
    }
    // Make the list circular
    if (start != NULL) 
	{
        temp=temp->next;
		temp->next = start;
    }
}
//at begin
void cll_insert_beg()
{
	node *newnode, *last;
	newnode = getnode();
	if(start == NULL)
	{
		start = newnode;
		newnode -> next = start;
	}
	else
	{
		last = start;
		while(last -> next != start)
			last = last -> next;
		newnode -> next = start;
		start = newnode;
		last -> next = start;
	}
	printf("\n Node inserted at beginning..");
	//nodectr++;
}




void display() {
    node *ptr;
    if (start == NULL) {
        printf("List is empty\n");
        return;
    }
    ptr = start;
    printf("Elements of Circular Linked List: ");
    while (ptr->next != start)
	{
        printf("%d ", ptr->data);
        ptr = ptr->next;
    } 
	printf("%d ", ptr->data);  
    printf("\n");
}


int main() {
    int n;
    printf("How many nodes: ");
    scanf("%d", &n);
    createlist(n);
    display();
    cll_insert_beg();
    printf("\n Printing node after insertion at the beginning..");
    display();
    return 0;
}