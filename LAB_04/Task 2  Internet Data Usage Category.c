#include<stdio.h>
int main()
{
	int a;
	printf(" Total GB used :");
	scanf("%d" ,&a);
	
	if(a<=50)
	{
			printf(" Basic User ");
	}
	else if (a>50 && a<=150)
	{
		printf(" Standard User ");
	}
	
	else  
	{
		printf(" Heavy User  ");
	}
}
