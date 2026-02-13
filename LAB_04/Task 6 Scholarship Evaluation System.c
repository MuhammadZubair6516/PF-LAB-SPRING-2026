#include<stdio.h>
int main()
{
	float a , b , c , d , e , f;

	printf("..........ENTER YOUR MARKS (0-100..............)\n");
	printf(" SUBJECT 1 :");
	scanf("%f" ,&a);
	printf(" SUBJECT 2 :");
	scanf("%f" ,&b);
	printf(" SUBJECT 3 :");
	scanf("%f" ,&c);
	printf(" SUBJECT 4 :");
	scanf("%f" ,&d);
	printf(" SUBJECT 5 :");
	scanf("%f" ,&e);
		 f = (((a+b+c+d+e)/500)*100);
	printf(" YOUR PERCENTAGE IS : %f \n" , f);

    if(f >=85)
	{
			printf(" Full Scholarship ");
	}
	else if (f>=70)
	{
		printf(" Partial Scholarship ");
	}
	else if (f>=50)
	{
		printf(" Eligible for Consideration ");
	}
	
	else  
	{
		printf(" Not Eligible  ");
	}
}

