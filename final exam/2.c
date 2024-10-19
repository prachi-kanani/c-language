#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter the number :");
	scanf("%d",&a);
	printf("enter the number :");
	scanf("%d",&b);
	printf("enter the number :");
	scanf("%d",&c);
	
	if(a>b)
	{
		printf("%d is max number");
	}
   else if (b>c)
	{
		printf("%d is max number");
	}
	else if(c>a)
	{
		printf("%d is max number");
	}
}
