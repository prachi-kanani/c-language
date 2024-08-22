#include<stdio.h>
#include<conio.h>
main()
{ int i,j,n=64;
  clrscr();

   for(i=1;i<=5;i++)
   {
     for(j=1;j<=i;j++)
      {        printf("%c",n+j);
      }
      printf("\n");
   }



   getch();
}