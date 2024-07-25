#include<stdio.h>
#include<conio.h>
main()
{
	int a;
	clrscr();
	printf("enter your marks :");
	scanf("%d",&a);
	(a >= 81 && a<= 100)
	?printf("%d your grade is a ",a)
	: 	(a>=71 && a<= 80)
	?printf("%d your grade is b ",a)
	:	(a>= 51 && a<= 70)
	?printf("%d your grade is c ",a)
	:	(a>= 41 && a<= 50)
	?printf("%d your grade is d ",a)
	:	(a>=33 && a<= 40)
	?printf("%d your grade is g ",a)
	:	(a>=0 && a<= 33)
	?printf("%d is you are fail",a)
	:	("better luck next time");
	getch();
}