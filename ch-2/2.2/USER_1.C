#include<stdio.h>
#include<conio.h>
main()
{
	float pi = 3.14;
	int r;

	clrscr();
	printf("Enter area of r");
	scanf("%d",&r);
	printf("The redius of circle\n");
	printf("%.2f * %d * %d =%.2f",pi,r,r,pi*r*r);



	getch();

	}
