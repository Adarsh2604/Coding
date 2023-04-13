/*###################################*****(ADARSH)*****################################*/
#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};
int isempty(struct stack *ptr)
{

    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {

        return 0;
    }
}
int isfull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    struct stack *S;
    S->size = 80;
    S->top = -1;
    S->arr = (int *)malloc(S->size * sizeof(int));

    if (isempty(S))
    {

        printf("The stack is empty");
    }
    else
    {
        printf("The stack is not empty");
    }

    return 0;
}