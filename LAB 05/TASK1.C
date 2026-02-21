#include<stdio.h>
int main()
{
	int a , b;
	printf(" enter fitness score :");
	scanf("%d" ,&a);
	printf(" enter age :");
	scanf("%d" ,&b);
	if(a>=85)
	{
        if(b<25)
        {
            printf(" 40%% Discount ");
        }
        else 
        {
			printf(" 25%% Discount ");
        }
          }
	else
	{
        if(a>=70 && b<30)
        {
		printf(" 15%% Discount ");
	}
    else  
	{
		printf(" No Discount ");
	}
}
	
}
