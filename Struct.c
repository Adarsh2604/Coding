#include<stdio.h>

struct student
{
    int id;
    int marks;
    char fav_char;
    char name[45];

};
int main()
{
    struct student Adarsh, Anuj,Aniket;
    Adarsh.id= 2;
    Anuj.id=3;
    Aniket.id=5;
    Adarsh.marks=680;
    Anuj.marks=670;
    Aniket.marks=700;

    strcpy(Adarsh.name," Adarsh ");
    printf("Adarsh got %d marks\n",Adarsh.marks);
    printf("Aniket got %d marks\n",Aniket.marks);
    printf("Anuj got %d marks\n",Anuj.marks);
    printf("Adarsh id is %d\n",Adarsh.id);
    printf("Adarsh's name is %s\n",Adarsh.name);
    return 0;


}
