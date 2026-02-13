#include<stdio.h>
int main()
{
	int a , discount , finalbill;
	printf(" Enter Total purchase amount : ");
	scanf("%d" ,&a);
	
	if(a>=5000)
	{  
	        discount = (0.20*a);
	        finalbill = a - discount ;
			printf(" AFTER 20 %% DISCOUNT TOTAL BILL  : %d" , finalbill);
	}
	else if (a>=3000)
	{
		    discount = (0.10*a);
	        finalbill = a - discount ;
		printf(" AFTER 10% DISCOUNT TOTAL BILL  : %d" , finalbill);
	}
	
	else  
	{
		
		printf(" NO DISCOUNT APPLIED , TOTAL BILL : %d" , a);
	}
}
