#include<stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FASLE 0

typedef struct Stack
{
    int *item;
    int size;
    int top;
}Stack;


void initStack(Stack *unitStack, int size)
{
     unitStack->item = malloc(sizeof(int)*size);
     unitStack->size = size;
     unitStack->top = -1;   
}


int isEmpty(Stack unitStack)
{
    return unitStack.top == -1;
}

int isFull(Stack unitStack)
{
    return unitStack.top == unitStack.size -1;
}

void push(Stack *unitStack,int value)
{
    if (isFull(*unitStack))
    {
        printf("Stack is FULL");
    }else
    {
       unitStack->top++;
       unitStack->item[unitStack->top] = value;
    }   
}

void pop(Stack *unitStack)
{
    if (isEmpty(*unitStack))
    {
        printf("Stack is EMPTY");
    }else
    {
       printf("Element result pop:%d",unitStack->item[unitStack->top]);
       unitStack->top--;
    }   
    
}


void prinStack(Stack unitStack)
{
    while (unitStack.top >= 0)
    {
        printf("\n %d",unitStack.item[unitStack.top]);
        unitStack.top--;
    }
    
}

int main()
{
     Stack unitStack;
     initStack(&unitStack,5);
     push(&unitStack,7);
     push(&unitStack,8);
     push(&unitStack,9);
     push(&unitStack,10);
     pop(&unitStack);

     prinStack(unitStack);

}