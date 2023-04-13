#include <stdio.h>

int linearsearch(int a[],int size,int element)
{
    for(int i=0; i<size; i++)
    {
        if(a[i]==element)
            return i;

    }
    return -1;

}
int main()
{
    int a[]= {1, 3,4, 6, 7,89, 9,0};
    int size=sizeof(a)/sizeof(int);
    int element= 7;
    int searchindex = linearsearch(a,size,element);
    printf("The element is found at index %d",searchindex);

    return 0;






}
