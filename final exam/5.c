#include <stdio.h>
 main() 
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int a[size]; 
    int i;

    for(i=0; i<size; i++) 
	{
        printf("Enter element %d: ",i+1);
        scanf("%d", &a[i]);  
    }

    printf("Array elements:\n");
    for(i=0; i<size; i++)
	 {
        printf("%d \t", a[i]);
    }
    
    printf("\n\n");
    
    if(size>i)
    {
    	printf(" this is largest number :");
	}
	else
	{
		printf("%d this is not largest number :");
	}

    
}
