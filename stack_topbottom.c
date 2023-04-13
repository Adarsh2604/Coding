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
                return 1;
        else
                return 0;
}
int isfull(struct stack *ptr)
{
        if (ptr->top == ptr->size - 1)
                return 1;
        else
                return 0;
}
void push(struct stack *ptr, int val)
{
        if (isfull(ptr))
                printf("stack overflow\n");
        else
                ptr->top++;
        ptr->arr[ptr->top] = val;
}
int peek(struct stack *sp, int i)
{
    int arrayInd = sp->top - i + 1;
    if (arrayInd < 0)
    {
        printf("Not a valid position for the stack\n");
        return -1;
    }
    else
        return sp->arr[arrayInd];
}
int stacktop(struct stack* sp){
    return sp->arr[sp->top];

}
int stackbottom(struct stack*sp){
    return sp->arr[0];

}

int main()
{
        struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
        sp->size = 10;
        sp->top = -1;
        sp->arr = (int *)malloc(sp->size * sizeof(int));
       // printf("Stack has been created successfully\n");
        printf("%d\n", isfull(sp));
        push(sp, 56);
        push(sp, 56);
        push(sp, 6);
        push(sp, 1);
        push(sp, 23);
        push(sp, 99);
        push(sp, 89);
        push(sp, 6); 
        printf("The top most element of the stack is %d\n",stacktop(sp));
        printf("The bottom  most element of the stack is %d\n",stackbottom(sp));
        for (int j = 1; j <= sp->top + 1; j++)
    {
        printf("The value at position %d is %d\n", j, peek(sp, j));
    }
       

        return 0;
}