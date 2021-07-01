#include "rmprint.h"

node* createNewList(int n)
{
    struct node *newNode, *temp, *head;
    float input;
    head = (node*)malloc(sizeof(node*));
    if(head==NULL)
    {
        printf("Memory unavailable");
    }
    else
    {
        printf("Enter the data at node 1: ");
        scanf("%f",&input);
        head->element=input;
        head->next=NULL;
        temp=head;
        for(int i=2;i<=n;i++)
        {
            printf("Enter the data at node %d: ",i);
            scanf("%f",&input);
            newNode=createNewNode(input);
            if(newNode==NULL)
            {
                printf("Memory limit exceeded");
            }
            else
            {
                temp->next=newNode;
                temp=temp->next;
            }
        }
    }
    return head;
}

node* createNewNode(float ele)
{
    node *new = (node*)malloc(sizeof(node*));
    if(new==NULL)
        return NULL;
    else 
    {
        new->element=ele;
        new->next=NULL;
    }
    return new;
}