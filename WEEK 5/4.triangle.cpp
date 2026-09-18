#include <stdio.h>
int main()
{
	float a,b,c;
	
	printf("Enter the three sides of the triangle:");
	scanf("%f %f %f", &a, &b, &c);
	
	if(a>b+c)
	{
		printf("No triangle is formed.");
	}
	else if(a*a==b*b+c*c)
	{
		printf("Right-angled triangle is formed.");
	}
	else if(a*a>b*b+c*c)
	{
		printf("Obtuse-angled triangle is formed.");
	}
	else if(a*a<b*b+c*c)
	{
	printf("Acute-angled triangle is formed.");	
	}
	return 0;
}
