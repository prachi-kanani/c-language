#include<stdio.h>
#include<conio.h>
main()
{
	int a;
	char grade;
	clrscr();
	printf("enter your marks :");
	scanf("%d",&a);
	if (a >= 81 && a<= 100)
	{       clrscr();
		printf("%d your grade is a ",a);
		grade = 'A';
	}
		else if(a>=61 && a<= 80)
		{
			printf("%d your grade is b",a);
			grade = 'B';
		}

	      else if (a>= 51 && a<= 60)
	{

		printf("%d your grade is c ",a);
		grade = 'C';
		}
		else if(a>= 41 && a<= 50)
	{

		printf("%d your grade is d ",a);
		grade = 'D';
	}
		else if (a>=33 && a<= 40)
	{

		printf("%d your grade is e ",a);
		grade = 'E';
	}
		else if (a>=0 && a<= 33)
	{

		printf("%d is you are fail",a);
		grade = 'F';
	}

	switch(grade)
	{
	case 'A':
		printf(" excellent work");
		break;
	case 'B':
		printf(" well done");
		break;
	case 'C':
		printf(" good job");
		break;
	case 'D':
		printf(" you passed,but you could do better");
		break;
	case 'E':
		printf (" you passed");
		break;
	case 'F':
		printf("sorry, you failed");
		break;


	}
	getch();
}