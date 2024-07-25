#include<stdio.h>
#include<conio.h>
main()
{	int a,b,c,d,e;
	float total,pr;
	clrscr();
	printf("English        :");
	scanf("%d",&a);
	printf("social science :");
	scanf("%d",&b);
	printf("Gujarati       :");
	scanf("%d",&c);
	printf("state          :");
	scanf("%d",&d);
	printf("account        :");
	scanf("%d",&e);
	total = (a+b+c+d+e);
	printf("Total=%f",total);
	pr = (total/500.)*100;
	if(pr>=91 && pr<=100)
	{   clrscr();
	    printf("grade = A+");
	}

	 else if(pr>=81 && pr<=90)
	{   clrscr();
	    printf("grade = A");
	}
	else if(pr>=71 && pr<=80)
	{   clrscr();
	    printf("grade = B+");
	}
	else if(pr>=61 && pr<=70)
	{   clrscr();
	    printf("grade = B");
	}
	else if(pr>=51 && pr<=60)
	{   clrscr();
	    printf("grade = C+");
	}
	else if(pr>=41 && pr<=50)
	{   clrscr();
	    printf("grade = C");
	}
	else if(pr>=33 && pr<=40)
	{   clrscr();
	    printf("grade = D");
	}
	else
	   {	clrscr();
	       printf("fail");
	   }
	   getch();
	}