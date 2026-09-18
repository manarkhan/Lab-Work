#include<stdio.h>
int main()
{
	int n, digit, rev= 0, sum= 0;
	
	printf("enter a number:");
	scanf("%d", &n);
	
	while(n>0)
	{
		digit = n%10;
		sum=sum+digit;
		rev=rev*10+digit;
		n=n/10;
	}
	printf("reverse=%d\n",rev);
	printf("sum of digits=%d",sum);
	return 0;
}
