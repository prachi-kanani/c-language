#include<stdio.h>
#include<conio.h>
main()
{
	int s,j,i;
	clrscr();
	for(i=1;i<=5;i++)
	{
		for(s=5;s>i;s--)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%d",i);
		}
	printf("\n");
	}
getch();
}