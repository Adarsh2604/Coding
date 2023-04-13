#include<stdio.h>
int main()
{


    int choice,a,b,s;



        printf(" 1.Addition\n");
        printf(" 2.odd or even\n");
        printf(" 3.print n natural numbers\n");


        printf("Enter a choice ");
        scanf("%d", &choice);

        switch(choice)
        {

        case 1:
            printf("Enter two numbers");
            scanf("%d%d", &a,&b);
            s = a+b;
            printf("Sum is :%d", s);
            break;


        case 2:
            printf("Enter a number");
            scanf("%d",&a);

            if(a%2==0)
            {


                printf("Even number ");
            }

            else
            {
                printf ("Odd number");

            }
            break;

        case 3:
            printf("Enter a number ");
            scanf("%d",&a);

            for(b=1 ; b<a; b++)
            printf("%d", b);
            break;


        default:

            printf("Invalid code");






}
    return 1;

}

