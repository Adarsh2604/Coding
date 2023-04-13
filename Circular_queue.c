/*###################################*****(ADARSH)*****################################*/
#include <stdio.h>
#include <stdlib.h>

struct circularqueue
{
    int size;
    int f;
    int r;
    int *arr;
};
int isempty(struct circularqueue *q)
{
    if (q->r == q->f)
    {
        return 1;
    }
    return 0;
}
int isfull(struct circularqueue *q)
{
    if ((q->r + 1) % q->size == q->f)
    {
        return 1;
    }
    return 0;
}
void enqueue(struct circularqueue *q, int val)
{
    if (isfull(q))
        printf("queue overflow\n");
    else
        q->r = (q->r + 1) % q->size;
    q->arr[q->r] = val;
    printf("Enqued element: %d\n", val);
}
int dequeue(struct circularqueue *q)
{
    int a = -1;
    if (isempty(q))
    {
        printf("queue is empty\n");
    }
    else
    {
        q->f = (q->f + 1) % q->size;
        a = q->arr[q->f]    ;
    }
    return a;
}

int main()
{
    struct circularqueue q;
    q.size = 4;
    q.f = q.r = 0;
    q.arr = (int *)malloc(q.size * sizeof(int));
    enqueue(&q, 12);
    enqueue(&q, 19);
    enqueue(&q, 17);
    printf("Dequeuing element %d\n", dequeue(&q));
    printf("Dequeuing element %d\n", dequeue(&q));
    printf("Dequeuing element %d\n", dequeue(&q));
    enqueue(&q, 15);
    enqueue(&q, 15);
    enqueue(&q, 15);
    if(isempty(&q)){
        printf("Queue is empty\n");
    }
    if(isfull(&q)){
        printf("Queue is full\n");
    }

    

    return 0;
}