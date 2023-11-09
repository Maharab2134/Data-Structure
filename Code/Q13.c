// Linked list create, traverse and print.

#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
}

*head;

void createList(int n);
void traverseList();

int main(){ // Main function
    int n;
    printf("Enter the number of nodes: ");
    scanf("%d",&n);

    createList(n);

    printf("\nData in the list \n");
    traverseList();
    return 0;
}
void createList(int n){ // Creating a list

    struct Node *newNode, *temp;
    int data, i;
    head = (struct Node *)malloc(sizeof(struct Node));

    if(head == NULL){
        printf("Unable to allocate memory");
        exit(0);
    }
    printf("Enter the data of node 1: ");
    scanf("%d",&data);

    head->data = data;
    head->next = NULL;
    temp = head;

    for(i=2;i<=n;i++){
        newNode = (struct Node *)malloc(sizeof(struct Node));
        if(newNode == NULL){
            printf("Unable to allocate memory");
            break;
        }
        printf("Enter the data of node %d: ",i);
        scanf("%d",&data);

        newNode->data = data; 
        newNode->next = NULL;
        temp->next = newNode;
        temp = temp->next;
    }
}
void traverseList(){ // Traversing the list

    struct Node *temp;
    if(head == NULL){
        printf("List is empty");
        return;
    }
    temp = head;
    while(temp != NULL){
        printf("Data = %d\n",temp->data);
        temp = temp->next;
    }
}