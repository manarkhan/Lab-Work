#include<stdio.h>

int binarySearch(int a[], int n, int key)
{
	int low=0, high=n-1, mid;
	
	while(low<=high)
	{
		mid=(low+high)/2;
	
	    if(a[mid]==key)
	       return mid;
	 
	    else if(a[mid]<key)
	       low=mid+1;
	 
	     else
	       high=mid-1;
    }
	
	return-1;
}
	
	int main()
	{
		int a[100],n,key,i,result;
		
		printf("enter number of elements:");
	    scanf("%d",&n);
	
	    printf("enter elements in ascending order:\n");
	    
        for(i=0;i<n;i++)
          scanf("%d",&a[i]);
          
        printf("enter element to search:");
        scanf("%d",&key);
        
        result=binarySearch(a,n,key);
        
        if(result!=-1)
           printf("element found a position %d",result+1);
        else
           printf("element not found");
	return 0;
}
