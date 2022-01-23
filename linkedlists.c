#include<stdio.h>
#include <stdlib.h>
void insertBegining();
void insertEnd();
void insertAfter();
void display();

struct node
{
    int data;
    struct node *next;
};
// head pointer stores the address of the starting structure node
// newnode pointer stores the address of the new structure nodes created 
// temp pointer is used so that the addresses stored by the newnode pointer is not destroyed when multiple nodes are created
// initially the head pointer don't have any address
// head= 0 or NULL
struct node *head= 0, *newnode, *temp;
int count= 0;

void main()
{
    int choice= 1, opt;
    while(choice==1)
    {
    /*  All the nodes have to created only when needed. We cannot specify how much memory is to be allocated in the begining 
        of the program. It needs to be dynamically allocated each time a node is created. This memory allocation is done by malloc.
        Malloc simply returns the staring address of the newly created structure node or memory block (here 4 + 4 bytes)
        ie; malloc(sizeof(struct node))  
        This newly created address is stored to a pointer variable called newnode pointer*/

        newnode= (struct node *) malloc(sizeof(struct node));

        printf("Enter the data: ");
        scanf("%d",& newnode-> data);
        newnode-> next= 0; /* Here we are giving 0 because this is the only node created and no node is created after this one in the present loop. 
                            Therefore the address of the newly created node is given null. */
   
        if (head == 0) 
            head= temp= newnode; /* This condition is only valid when a new structure node is created for the 1st time
                                    So the address of the newly created node (whic is obtained from malloc) is copied from the newnode 
                                    pointer to the head pointer and the temp pointer 
                                    Head pointer address remains fixed in the rest of the program.*/ 
        else
        {
            temp-> next= newnode; /*here the temp pointer refers to previous node's address and the 
                                    newnode's address gets copied to previous node's next*/ 
            temp= newnode; /*here the temp pointer address gets updated to the newnode pointer address
                            At the end of each loop, the address of temp pointer must be same as the address of the newnode pointer */
                            /*VIM*/
        }

        printf("Do you want to continue (0, 1) ?\n");
        scanf("%d", & choice);
    }

    // Display list
    display();

    printf("\nOption 1: insertBegining\nOption 2: insertEnd\nOption 3: insertAfter\n");
    printf("Enter the option number: ");
    scanf("%d", & opt);
    switch (opt)
    {
        case 1: insertBegining();
                break;
        case 2: insertEnd();
                break;
        case 3: insertAfter();
                break;
        default: 
                printf("\n");
    }

    // Reset count to zero and Display
    count= 0;
    display();
}

void display()
{
    printf("List:\n");
    for (temp= head; temp!= 0; temp= temp-> next) /*temp= 0, refers to the NULL node address after the last node in the list. 
                                                    So the loop stops before reaching the NULL node.
                                                    Here the list gets displayed but the final address of temp gets updated to NULL*/
    {
        printf("%d\n", temp-> data);
        count++;
    }
    printf("The total nodes created=  %d", count);
}

void insertBegining()
{
    newnode= (struct node *) malloc(sizeof(struct node));
    printf("Enter the data:");
    scanf("%d", & newnode->data);
    newnode->next= head;
    head= newnode;
}

void insertEnd()
{
    newnode= (struct node *) malloc(sizeof(struct node));
    printf("Enter the data:");
    scanf("%d", & newnode->data);
    newnode->next= 0;
    // traversing through list
    for(temp= head; temp->next!= 0; temp= temp->next); /*temp->next= 0 refers to the address stored in last node.
                                                        So the loop stops before reaching the last node, ie, it stops in 2nd last node.
                                                        However, finally, address of temp gets updated to last node's address*/
    temp->next= newnode;                                                    
}

void insertAfter()
{
    int pos, i= 1;
    printf("Enter the position:");
    scanf("%d", & pos);
    if (pos > count)
        printf("Invalid position");
    else
    {
        newnode= (struct node *) malloc(sizeof(struct node));
        printf("Enter the data:");
        scanf("%d", & newnode->data);
        for(temp= head; i< pos; temp= temp->next, i++); /*  So the loop stops before reaching the selected node, ie, it stops in previous node. 
                                                            However, finally, address of temp gets updated to selected node's address  */
        newnode->next= temp->next;
        temp->next= newnode;
    }
}