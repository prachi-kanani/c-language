#include<stdio.h>

void loop(int start,int end)
{
	printf("%d\t",start);
	start++;
	if(start<=end)
	{
		loop(start,end);
	}
}
	void main()
	{
		loop(1,10);
	}	
	

