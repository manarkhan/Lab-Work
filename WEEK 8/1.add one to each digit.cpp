#include<stdio.h>
int main()
{
	int n, digit, result=0, place=1;
	
	printf("enter a 5-digit number:");
	scanf("%d",&n);
	
	while(n>0)
	{
		digit=n%10;
		digit=digit+1;
		
		result=result+digit*place;
		place=place*10;
		
		n=n/10;
	}
	printf("new number=%d", result);
	
	return 0;
}
