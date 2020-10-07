#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node* next;
};

void push(struct node**, int);
int pop(struct node**);

int main()
{
    struct node* top = NULL;
    int ch, n;

    while(1) {
        printf("1.Push\n 2.Pop\n 3.Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                printf("Enter data to push: ");
                scanf ("%d",&n);
                push(&top, n);
                break;
            
            case 2:
                n = pop(&top);
                if (n!=-9999)
                    printf("The popped element is: %d",n);
                break;

            case 3:
                exit(1);
            
            default:
                printf("Invalid choice\n");
        }
    }
}

void push(struct node** top, int item)
{
    struct node* new_node;
    new_node = (struct node*)malloc(sizeof(struct node));
    new_node -> info = item;
    new_node -> next = *top;
    *top = new_node;
    return;
}

int pop(struct node** top)
{
    int item;
    struct node* temp;
    if(*top==NULL) {
        printf("Stack is empty\n");
        return(-9999);
    }

    item = (*top) -> info;
    temp = *top;
    *top = (*top) -> next;
    temp -> next = NULL;

    free(temp);
    return(item);
}