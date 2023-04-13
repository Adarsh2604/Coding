#include<stdio.h>
#include<string.h>


typedef struct student
{
    int id;
    int marks;
    char fav_char;
    char name[45];

}std ;
//std is the alias name here ,  means new name

int main()
{
    std Adarsh, Anuj,Aniket;
    Adarsh.id= 2;
    Anuj.id=3;
    Aniket.id=5;
    Adarsh.marks=600;
    Anuj.marks=670;
    Aniket.marks=700;
    strcpy(Adarsh.name,"Adarsh ");
    printf("Adarsh got %d marks\n",Adarsh.marks);


    printf("Adarsh id is %d\n",Adarsh.id);




    return 0;
}
