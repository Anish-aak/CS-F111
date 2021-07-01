#include "rmprint.h"

void printList(node *head)
{
    node *temp = head;
    while(temp != NULL)
    {
        if(temp->next == NULL)
        {
            printf("%f", temp->element);
        } 
        else 
        {
            printf("%f -> ", temp->element);
        }
        temp = temp->next;
    }
}

void removeElement(node* head, float i)
{
    node *prev, *curr;
    while(head!=NULL && head->element==i)
    {
        prev=head;
        head=head->next;
        free(prev);
    }
    prev=NULL;
    curr=head;
    while(curr!=NULL)
    {
        if(curr->element==i)
        {
            if(prev!=NULL)
            {
                prev->next=curr->next;
            }
            free(curr);
            curr=prev->next;
        } 
        else 
        {
            prev=curr;
            curr=curr->next;
        }
    }
}