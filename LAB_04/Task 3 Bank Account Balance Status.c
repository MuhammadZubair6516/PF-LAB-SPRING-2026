#include<stdio.h>
int main()
{
	int a;
	printf(" Account balance (integer):");
	scanf("%d" ,&a);
	
	if(a>0)
	{
			printf(" Positive Balance ");
	}
	else if (a<0)
	{
		printf(" Overdrawn ");
	}
	
	else  
	{
		printf(" Zero Balance  ");
	}
}
