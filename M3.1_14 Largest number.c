//14.WAP to find the largest of three numbers.

#include<stdio.h>
main()
{
	int a,b,c;
	printf("\n\n\t Enter number 1 :");
	scanf("%d",&a);
	printf("\n\n\t Enter number 2 :");
	scanf("%d",&b);
	printf("\n\n\t Enter number 3 :");
	scanf("%d",&c);
	
	if(a>=b && a>=c)
	{
		printf("\n\n\t %d is the largest number",a);
		
	}
	else if(b>=a && b>=c)
	{
		printf("\n\n\t %d is the largest number",b);
		
	}
	else 
	{
		printf("\n\n\t %d is the largest number",c);
	}
}