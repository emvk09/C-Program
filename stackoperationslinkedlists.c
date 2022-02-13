/*The main difference between linked lists and stackoperations using linkedlists is that, in linked lists,
the previous node contains the address of the newnode and we set newnode.next=0 in the case of a final node created. Whereas in stack, 
the newnode contains the address of the previous node.

In linked lists we keep the head as fixed and head pointer points the begining of the list. We always needs to traverse fom the head pointer.
In stack using linked lists, we update the top after each operations and top is taken as the upper point of the stack; in short, 
the top pointer points the finally created newnode. 
We do not traverse through the nodes since we follow the LIFO rule*/

#include<stdio.h>
#include <stdlib.h>

void push(int);
void pop();
void peek();
int isEmpty();
void display();

struct Node
{
    int data;
    struct Node *next;
};
struct Node *top= 0, *newnode;

int main()
{
	int option, x;
	
	while(1)
	{
		printf("\nOption 1: Push\nOption 2: Pop\nOption 3: peek\nOption 4: display\nOption 5: Exit\n");
		printf("Enter the option number: ");
		scanf("%d", & option);
		switch(option)
		{
			case 1: printf("Enter the number:");
					scanf("%d",& x);
					push(x);
					break;
			case 2: pop();
					break;
			case 3: peek();
					break;
			case 4: display();
					break;
			case 5: exit(0);
			default:
					printf("Invalid option. Try again\n");
		}
	}
	return 0;
}

int isEmpty()
{
	return (top == 0);
}

void push(int y)
{
    newnode= (struct Node *)malloc(sizeof(struct Node));
    newnode->data= y;
    // currently top is the address of the previous node and we are copying the address to the newnode.next, thus making links with the previous node
    newnode->next= top;
    top= newnode; // now top becomes the lastly created node. So next time when newnoode is created, the top becomes the previous node
    printf("Inserted element: %d\n", y);
}

void pop()
{
	if (isEmpty())
		printf("Underflow !!\n");
	else
	{
        struct Node *temp; // This pointer is created inorder access the memory occupied by the top and free it
		printf("Popped element: %d\n",  top->data);
        temp=top;
		top= top->next; // here, top->next actually indicates the previous node of top
        free(temp);
	}
}

void peek()
{
    if (isEmpty())
		printf("The stack is empty.\n");
	else
		printf("Peeked element: %d\n", top->data);
}

void display()
{
	if (isEmpty())
		printf("The stack is empty.\n");
	else
	{
        struct Node *temp;
        // since top is taken as the starting point of the stack and needs to be kept fixed, we take another pointer to traverse from the starting point
		printf("Stack:\n");
		for(temp= top; temp != 0; temp= temp->next)
			printf("%d\n", temp->data);
	}
}
