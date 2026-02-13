#include<stdio.h>
int main()
{
	char a [5] ; int b;
	printf(" Enter username :");
	scanf("%s" ,&a);
	printf(" Enter password :");
	scanf("%d" ,&b);
	
	
	if(a[0]=='u' && a[1] =='s' && a[2] =='e' && a[3] =='r' && b==256516)
	{
			printf(" Connected Successfully ");
	}
	else
	{
		printf(" Connection Failedd  ");
	}
}
