#include<stdio.h>
int main()
{
	int n, temp, digit, sum;
	
	printf("armstrong numbers between 0 and 999 are:\n");
	for(n=0;n<=999;n++)
	{
		temp=n;
		sum=0;
		
		while(temp>0)
		{
			digit=temp%10;
			sum=sum+digit*digit*digit;
			temp=temp/10;
		}
		if(sum==n)
		{
			printf("%d",n);
		}
	}
	return 0;
}
