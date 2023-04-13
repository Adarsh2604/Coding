#include <stdio.h>
int sum(int a)
{
    int s;
    if (a == 1)
        return 1;
    s = a + sum(a - 1);
    return s;
}
int main()
{
    int k;
    k = sum(2);
    printf("%d", k);
    return 0;
    
}
