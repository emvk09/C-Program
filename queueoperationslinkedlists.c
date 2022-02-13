// Queue using linked lists is same as singly linked list, but the only differencce is that queue will have two pointers
// instead of the head pointer we take *front and we take *rear as the tail pointer to denote the lastly created node
// Thus we can avoid the traversing through the list to reach the last node, thus preventing O(n)
// *rear= enqueue
// *front= dequeue

#include<stdio.h>
#include <stdlib.h>

void enqueue(int);
void dequeue();
void peek();
int isEmpty();
void display();

struct Node
{
    int data;
    struct Node *next;
};
struct Node *front= 0, *rear= 0, *newnode;

int main()
{
	int option, x;
	
	while(1)
	{
		printf("\nOption 1: Enqueue\nOption 2: Dequeue\nOption 3: peek\nOption 4: display\nOption 5: Exit\n");
		printf("Enter the option number: ");
		scanf("%d", & option);
		switch(option)
		{
			case 1: printf("Enter the number:");
					scanf("%d",& x);
					enqueue(x);
					break;
			case 2: dequeue();
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
    return((front == 0) && (rear == 0));
}

void enqueue(int y)
{
    newnode= (struct Node *)malloc(sizeof(struct Node));
    newnode->data= y;
    newnode->next= 0;
    if (isEmpty())
	{
		front= rear= newnode; //*front is fixed like the head pointer and there will be no further modification of front in enqueue
		printf("Inserted element: %d\n", y);
	}
	else
	{
		rear->next= newnode;
		rear= newnode;
		printf("Inserted element: %d\n", y);
	}
}

void dequeue()
{
	if (isEmpty())
		printf("Underflow !!\n");
	else if (front == rear) // This condition is done to reset the front and rear back to 0 if there was only one element remaining.  
    {
        printf("Dequeued element: %d\n", front->data);
        front= rear= 0;
    }
    else
    {
        printf("Dequeued element: %d\n", front->data);
        front= front->next;
    }
}

void peek()
{
    if (isEmpty())
		printf("The stack is empty.\n");
	else
		printf("Peeked element: %d\n", front->data);
}

void display()
{
	if (isEmpty())
		printf("The stack is empty.\n");
	else
	{
        struct Node *temp;
		printf("Queue:\n");
		for(temp= front; temp != 0; temp= temp->next)
			printf("%d ", temp->data);
		printf("\n");
	}
}
