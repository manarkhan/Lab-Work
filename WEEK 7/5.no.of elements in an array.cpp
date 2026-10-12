#include<stdio.h>

int main()
{
	int a[100],n,i,sum;
	
	printf("enter the number of elements:");
	scanf("%d", &n);
	
	for(i=0;i<n;i++)
	{
    	scanf("%d", &a[i]);
    }
    
    printf("number of elements in the array=%d",n);
    
    return 0;
}
