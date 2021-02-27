#include<stdio.h>
#include<stdlib.h>

typedef struct pq
{
	int d, p;
	struct pq *next;
}prio;

void insert(prio **head, int item, int n)
{
	prio *loc, *locp, *newnode;
	loc = *head;
	while(loc != NULL && loc->p>=n)
	{
		locp = loc;
		loc = loc->next;
	}
	newnode = (prio*)malloc(sizeof(prio));
	newnode->d=item;
	newnode->p=n;
	if(*head == loc)
	{
		newnode->next=*head;
		*head=newnode;
	}
	else
	{
		newnode->next=locp->next;
		locp->next = newnode;
	}
	return;
}

void delete(prio **head)
{
	int item;
	prio *temp;
	if(*head==NULL)
	{
		printf("Underflow\n");
		return -1;
	}
	item = (*head)->d;
	temp = *head;
	*head = temp->next;
	temp->next=NULL;
	free(temp);
	return item;
}

int main()
{
	prio *head = NULL;
    int element, n, num;

    do
    {
        printf("\nOperations to be performed:\n");
        printf("1. Insertion\n");       
        printf("2. Deletion\n");       
        printf("3. Exit.\n");        

        printf("\nEnter the operation (1-3): ");
        scanf("%d", &num);

        if(num == 1)
        {
            printf("\nEnter the element to insert: ");
            scanf("%d", &element);
            printf("Enter the priority: ");
            scanf("%d", &n);
            insert(&head,item,n);
        }
        else if(num == 2)
        {
            n = delete(&head);
            if(n!=-1)
            	printf("deleted: %d\n", n);
        }
    }while(num != 3);

    return 0;
}