#include<stdio.h>

int add(int a,int b)
{
	printf("enter 1st int number :");
	scanf("%d",&a);
	printf("enter 2nd int number :");
	scanf("%d",&b);
	return a+b;
	
}
int sub(int a,int b)
{
	printf("enter 1st int number :");
	scanf("%d",&a);
	printf("enter 2nd int number :");
	scanf("%d",&b);
	return a-b;
	
}
int mul(int a,int b)
{
	printf("enter 1st int number :");
	scanf("%d",&a);
	printf("enter 2nd int number :");
	scanf("%d",&b);
	return a*b;
	
}
float div(float c,float d)
{
	printf("enter 1st int number :");
	scanf("%d",&c);
	printf("enter 2nd int number :");
	scanf("%d",&d);
	return c/d;
	
}
int modual(int a,int b)
{
	printf("enter 1st int number :");
	scanf("%d",&a);
	printf("enter 2nd int number :");
	scanf("%d",&b);
	return a%b;
	
}

int main()
{
	int choice,i,j;
	int a,b;
	float c,d;
	
	printf("arithmetic operations calculator\n\n");
	printf("enter 1 for addition\n");
	printf("enter 2 for s0ubtraction\n");
	printf("enter 3 for multiplication\n");
	printf("enter 4 for division\n");
	printf("enter 5 for modules\n");
	printf("enter 0 for exit\n");
	printf("\n\nenter any number :");
	scanf("%d",&choice);
	
	do
	{
		switch(choice)
		{
			case 1:
				j=add(a,b);
				printf("%d + %d = %d",a,b,(a+b));
			break;
			case 2:
				j=sub(a,b);
				printf("%d - %d = %d",a,b,(a-b));
			break;
			case 3:
				j=mul(a,b);
				printf("%d * %d = %d",a,b,a*b);
			break;
			case 4:
				j=div(a,b);
				printf("%2.f / %.2f = %.2f",c,d,c/d);
			break;
			case 5:
				j=modual(a,b);
				printf("%d %% %d = %d",a,b,a%b);
			break;
		default : choice=0;
		break;
		printf("\n");
		
		}
		
	}while(choice!=0);
	printf("\n");
	printf("your answer is  :  %d ");
}

