#include<stdio.h>
void main()
{
	int n;
	printf("Enter any number :");
	scanf("%d",&n);
	
	if(n>0)
	{
		printf("this number is positive");
	}
	else if(n<0)
	{
		printf("this number is nagative");
	}
	else
	{
		printf("this number is zero");
	}
}
