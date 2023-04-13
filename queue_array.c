/*###################################*****(ADARSH)*****################################*/
#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int size;
    int f;
    int r;
    int *arr;
};
int isempty(struct queue *q)
{
    if (q->r == q->f)
    {
        return 1;
    }
    return 0;
}
int isfull(struct queue *q)
{
    if (q->r == q->size - 1)
    {
        return 1;
    }
    return 0;
}
void enqueue(struct queue *q, int val)
{
    if (isfull(q))
        printf("queue overflow\n");
    else
        q->r++;
    q->arr[q->r] = val;
    printf("Enqued element: %d\n", val);
}
int dequeue(struct queue *q)
{
    int a = -1;
    if (isempty(q))
    {
        printf("queue is empty\n");
    }
    else
    {
        q->f++;
        a = q->arr[q->f];
    }
    return a;
}

int main()
{
    struct queue q;
    q.size = 100;
    q.f = q.r = -1;
    q.arr = (int *)malloc(q.size * sizeof(int));
    enqueue(&q, 12);
    enqueue(&q, 19);
    enqueue(&q, 17);
    printf("Dequeuing element %d\n", dequeue(&q));
    printf("Dequeuing element %d\n", dequeue(&q));

    int isFull(struct queue * q)
    {
        if (q->r == q->size - 1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    return 0;
}