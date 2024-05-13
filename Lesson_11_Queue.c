#include<stdio.h>
#include <stdlib.h>

typedef struct Queue
{
    int *item;
    int size;
    int font;
    int rear; // behind
}Queue;


void initQueue(Queue *unitQueue, int size)
{
    unitQueue->item = malloc(sizeof(int)*size);
    unitQueue->font = -1;
    unitQueue->rear = -1;
    unitQueue->size = size;
}
 
int isEmpty(Queue unitQueue)
{
    return (unitQueue.font == -1 && unitQueue.rear == -1);
}

int isFull(Queue unitQueue)
{
    return unitQueue.rear >= unitQueue.size -1;
}

void enQueue(Queue *unitQueue , int value)
{
    if (isFull(*unitQueue))
    {
        printf("Queue was Full");
    }else
    {
        
    }
    
}







int main()
{

}