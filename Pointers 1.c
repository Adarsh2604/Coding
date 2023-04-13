#include<stdio.h>
int main()
{
    int a=75;
    int*ptra =&a;
    int *ptr2=NULL;



    printf("The value of a is %d\n",*ptra);
    printf("The address of pointer to a is  %d\n ",&ptra);
    printf("The address of garbage  is  %d",ptr2);


    return 0;
}
