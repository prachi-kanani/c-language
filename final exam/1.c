#include<stdio.h>
main()
{
	int fact=1;
	int n;
	int i;
	
	 printf("enter the number :");
	 scanf("%d",&n);
	 
	 
	 for(i=1;i<=n;i++)
	 {
	 	fact=i*fact;
	 }
	  printf("your ans is %d",fact);
}
