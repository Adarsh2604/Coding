#include <stdio.h>
struct Student
{
 int roll;
 char name[50];
 char sec;
}s1,s2,s3;
int main()
{
 printf("\nEnter the name:");
 scanf("%s",s1.name);
 printf("\nEnter the roll:");
 scanf("%d",&s1.roll);
 printf("\nEnter the Section:");
 scanf("%s",&s1.sec);
 printf("\nEnter the name:");
 scanf("%s",s2.name);
 printf("\nEnter the roll:");
 scanf("%d",&s2.roll);
 printf("\nEnter the Section:");
 scanf("%s",&s2.sec);
 printf("\nEnter the name:");
 scanf("%s",s3.name);
 printf("\nEnter the roll:");
 scanf("%d",&s3.roll);
 printf("\nEnter the Section:");
 scanf("%s",&s3.sec);

 printf("\nName of students that starts with A are: ");

 if(s1.name[0]== 'A')
 {
 printf("%s\n",s1.name);
 }
 if(s2.name[0]== 'A')
 {
 printf("%s\n",s2.name);
 }
 if(s3.name[0]== 'A')
 {
 printf("%s\n",s3.name);
 }
return 0;
}
