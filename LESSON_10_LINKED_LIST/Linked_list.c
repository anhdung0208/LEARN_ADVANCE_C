#include<stdio.h>
#include <stdlib.h>


typedef struct Node
{
    int data;
    struct Node* next;
}Node;

void initList(Node** head)
{
   *head = NULL;
}

Node* createNode(int value)
{
    Node* newNode = malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

void addNodeToFirst(Node** head,int value)
{
    Node* newNode = createNode(value);

    if (*head == NULL)
    {
        *head = newNode;
    }
    else
    {
        newNode->next = *head;
        *head = newNode;       
    }   
}


void push_back(Node** head,int value)
{
   Node* newNode = createNode(value);
    if (head == NULL)
    {
        *head = newNode;
    }else
    {
        Node* position = *head;
        while (position->next != NULL)
        {
            position = position->next;
        }
        position->next = newNode;

    }
    
}


void pop_between(Node** head, int target)
{
    
    if (*head == NULL)
    {
        printf("No element in LinkedList");
    }else
    {
    Node* position = *head;
    Node* previous = NULL;   

        while (position->next != NULL && position->data != target)  
        {
            previous = position;
            position = position->next;         
        }      
        previous->next = position->next;
        position->next = NULL;       
    }      
}

void pop_back(Node** head)
{
    if (*head == NULL)
    {
        printf("No element in LinkedList");
    }else
    {
    Node* position = *head;
    Node* previous = NULL;   

        while (position->next != NULL)  
        {
            previous = position;
            position = position->next;         
        }      
        previous->next = NULL;   
    }      
}

void get_value_font(Node** head)
{
    Node* position = *head;
    if (*head == NULL)
    {
        printf("No element in LinkedList");    
    }else
    {
       Node* position = *head;
       printf("The first value in Linked List: %d",position->data); 
    }
    
}


void get_value_back(Node** head)
{
    Node* last_position = *head;
    if (*head == NULL)
    {
        printf("No element in LinkedList");    
    }else
    {
       while (last_position->next != NULL)
       {
        last_position = last_position->next;
       }
       
       printf("The first value in Linked List: %d",last_position->data); 
    }
    
}

void add_Node_between(Node** head, int target,int value)
{
        Node* newNode = createNode(value);

    if (*head == NULL)
    {
        *head = newNode;
    }
    else
    {
        Node* position = *head;
        Node* previous = NULL;   

        while (position->next != NULL && position->data != target)  
        {
            previous = position;
            position = position->next;         
        }      
        newNode->next = position;         
        previous->next = newNode;
    } 
}




void printLinkedList(Node* head)
{
    Node* current = head;
    while (current != NULL)
    {
        printf("\n %d", current->data);
        current = current->next;
    }
}




int main()
{
    Node* head;
    initList(&head);
    addNodeToFirst(&head,10);
    addNodeToFirst(&head,9);
    addNodeToFirst(&head,6);
    addNodeToFirst(&head,4);
    addNodeToFirst(&head,3);

    push_back(&head,13);
    //pop_between(&head,6);
    //pop_back(&head);
    get_value_font(&head);
    get_value_back(&head);
    add_Node_between(&head,4,999);


    printLinkedList(head);
}