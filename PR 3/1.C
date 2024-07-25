#include<stdio.h>
#include<conio.h>
main()
{
	char A='a';
	clrscr();
	do
	{
		print("%c",A);
		A+=4;
	}while(A<='z');
	getch();
}
