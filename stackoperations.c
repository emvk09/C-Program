#include<stdio.h>
#include<stdlib.h>
#define Maxsize 5

void push();
void pop();
void peek();
int isEmpty();
int isFull();
void display();

int top= -1, stack[Maxsize];
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

int isFull()
{
	return (top == Maxsize- 1);
}

int isEmpty()
{
	return (top == -1);
}

void push(int y)
{
	if (isFull())
		printf("Overflow !!\n");
	else
	{
		top++;
		stack[top]= y;
		printf("Inserted element: %d\n", y);
	}
}

void pop()
{
	if (isEmpty())
		printf("Underflow !!\n");
	else
	{
		printf("Popped element: %d\n", stack[top]);
		top--;
	}
}

void peek()
	{
		if ( !isEmpty())
			printf("Peeked element: %d\n", stack[top]);
	}

void display()
{
	if (top ==- 1)
		printf("The stack is empty.\n");
	else
	{
		printf("Stack: \n");
		for(int i= top; i>= 0; i--)
			printf("%d\n", stack[i]);
	}
}
