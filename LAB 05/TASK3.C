#include<stdio.h>
int main()
{
	int a , b , c;
	printf("Main Luggage Type:\n1. Handbag\n2. Checked Bag\n3. Sports Equipment\n");
    printf(" enter your type :");
	scanf("%d" ,&a);
	if(a==1)
	{
        printf(" 1. Small \n2. Large \n");
        printf(" enter your type :");
	    scanf("%d" ,&b);
        if(b==1)
        {
            printf(" (Rs. 100 per kg) ");
        }
        else 
        {
			printf(" (Rs. 200 per kg) ");
        }
    }
          else if(a==2)
      {
        printf(" 1. Domestic \n2. International \n");
        printf(" enter your type :");
        scanf("%d" ,&c);
        if(c==1)
        {
            printf(" (Rs. 300 per kg) ");
        }
        else 
        {
            printf(" (Rs. 500 per kg) ");
        }
          }
        
    else if(a==3)
	{
        printf(" Fixed Rate Rs. 1000 per kg ");
    }
}