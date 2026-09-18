#include<stdio.h>
int main()
{
	int n, temp, digit, reverse=0;
	
	printf("enter a number:");
	scanf("%d", &n);
	
	temp=n;
	
	while(temp>0)
	{
		digit=temp%10;
		reverse=reverse*10+digit;
		temp=temp/10;
	}
	if(reverse==n)
	{
		printf("the number is a palindrome.");
	}
	else
	{
		printf("the number is not a palindrome.");
	}
	return 0;
}
