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

int main()
{
        struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
        sp->size = 10;
        sp->top = -1;
        sp->arr = (int *)malloc(sp->size * sizeof(int));
        printf("Stack has been created successfully\n");
        printf("%d\n", isfull(sp));
        push(sp, 56);
        push(sp, 56);
        push(sp, 6);
        printf("%d\n", isfull(sp));
        printf("Before pushing, Full: %d\n", isfull(sp));
        printf("Before pushing, Empty: %d\n", isempty(sp));
        push(sp, 1);
        push(sp, 23);
        push(sp, 99);
        
        push(sp, 89);
        push(sp, 6); // ---> Pushed 10 values
        // push(sp, 46); // Stack Overflow since the size of the stack is 10
        printf("After pushing, Full: %d\n", isfull(sp));
        printf("After pushing, Empty: %d\n", isempty(sp));

        return 0;
}