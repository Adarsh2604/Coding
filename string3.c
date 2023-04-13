#include<stdio.h>


int main(){
	int a[5],i;
	printf("Enter integers %d", 5);
	for (i=0;i<5;i++)
	scanf("%d",&a[i]);
	
	printf("Reversed array is :\n");
	for(i=4 ;i>=0;i--)
	printf(" %d ", a[i]);
	
	return 0;
	
	
}
