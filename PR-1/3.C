#include<stdio.h>
#include<conio.h>

main()
{
	int p,q;
	int ans;
	clrscr();
	printf("enter the first angle p :");
	scanf("%d",&p);
	printf("enter the secound value q :");
	scanf("%d",&q);
	ans= 180-(p+q);
	printf("%d",ans);
	getch();
}