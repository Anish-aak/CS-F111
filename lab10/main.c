#include "rmprint.h"

int main()
{
    printf("The number of nodes in the list:\n");
    int n;
    scanf("%d",&n);
    printf("The elements in the list:\n");
    node *head = createNewList(n);
    printf("The elements of the list are:\n");
    printList(head);
    printf("\n");
    printf("The element to be deleted:\n");
    float del;
    scanf("%f",&del);
    removeElement(head, del);
    printf("The list after deletion:\n");
    printList(head);
    printf("\n");
    return 0;
}