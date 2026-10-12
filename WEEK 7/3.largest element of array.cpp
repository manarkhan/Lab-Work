#include<stdio.h>

int main()
{
	int a[100],n,i,sum;
	
	printf("enter the number of elements:");
	scanf("%d", &n);
	
	printf("enter the elements:\n");
	for(i=0;i<n;i++)
	{
    	scanf("%d", &a[i]);
    	sum=sum+a[i];
    }
    
    printf("sum of array elements=%d", sum);
    
    return 0;
}
