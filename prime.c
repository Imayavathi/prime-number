#include<stdio.h>
void main()
{
	int n,i;
	printf("Enter a number:");
	scanf("%d",&n);
	if(n==2)
	 printf("It is a prime number.\n");
	else
	{
		for(i=2;i<=n-1;i++)
		{
			if(n%i==0)
			break;
		}
		if(i!=n)
		 printf("It is not a prime number.\n");
		else
		 printf("It is a prime number.\n");
	}
}
