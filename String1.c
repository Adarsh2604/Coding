#include<stdio.h>
#include<string.h>

int main()
 {
	char s1[]="ADARSH";
	char s2[]="Anuj";
	printf("The length of the string is %d\n ", strlen(s1));
	printf("The length of the string is %d\n ",strlen(s2));
	puts(strcat(s1,s2));
	printf("the strcmp is:%d",strcmp(s1,s2));
	
	
	return 0;
	
	
 }
