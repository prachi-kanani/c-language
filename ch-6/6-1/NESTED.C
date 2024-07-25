#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	clrscr();
	printf("Enter the a :");
	scanf("%d",a);
	printf("Enter the b :");
	scanf("%d",b);
	printf("Enter the c :");
	scanf("%d",c);



		if(a>b)
		{
		       if  (a>c)
		       {
		       printf("%d is maximum",a);
		       }

		       else
		       {  printf("%d is maximum ",c);
		       }
		}

		else
		{      if (b>c)


		     {	printf("%d is maximum",b);
		     }

		     else
		     { printf("%d is maximum",c);
		     }
		}





	getch();
}