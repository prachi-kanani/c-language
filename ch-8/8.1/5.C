#include<stdio.h>
#include<conio.h>

main()
{
	int i,n;
	clrscr();
	printf("Enter the first number =");
	scanf("%d",&i);
	printf("Enter the secound number =");
	scanf("%d",&n);
	while(i<=n)
	{       if(i%4==0)
		{printf("%d\t",i);
		}
		i++;
	}

 getch();
}