#include<stdio.h>
#include<conio.h>
main()
{
	int s,j,i;
	char ch='A';
	clrscr();
	for(i=5;i>=1;i--)
	{
		for(s=5;s>i;s--)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%c",64+j);
		}
	printf("\n");
	}
getch();
}