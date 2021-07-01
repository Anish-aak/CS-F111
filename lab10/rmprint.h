#ifndef RMPRINT_H_
#define RMPRINT_H_

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    float element;
    struct node *next;
} node;

node* createNewNode(float ele);
node* createNewList(int n);
void removeElement(node* head,float i);
void printList(node *head);

#endif