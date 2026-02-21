#include<stdio.h>
int main ()
{
	int a , f ; float  b ,c , d , e  ;
	printf("Operations:\n1  BMI Calculation\n2  BMR Calculation\n3  Ideal Weight (Devine Formula)\n4  Heart Rate Zone (Percentage of Max HR)");
	printf("\nENTER YOUR CHOICE :");
	scanf("%d",&a);
	printf("enter your weight in kg :");
	scanf("%f",&b);
	printf("enter your height  :");
	scanf("%f",&d);
	printf("enter your age in years :");
	scanf("%f",&e);	
	printf(" \nGENDER\n1. MEN\n2. WOMEN\n");
	printf("enter your choice :");
	scanf("%d",&f);
	
	switch(a){
		case 1:
			
			if (b<0 || d<0)
			{
					printf("invalid input");	
			}
			else{
					c=(b/d)	;
					printf("Your BMI is :%.2f ",c);
					}
					break;
		case 2:
			
			if (b<0 || d<0 || e<0)
			{
					printf("invalid input");	
			}
			else{
				
			if(f==1){
				    c = ((10*b)+(6.25*d)-(5*e))+5;
					printf("Your BMR is :%.2f ",c);
			}
			else{
				c = ((10*b)+(6.25*d)-(5*e)-161);
					printf("Your BMR is :%.2f ",c);
			}
					}
					break;
	
		case 3:
            if (d<0) {
                printf("invalid input");
            } else{
                if(f==1){
                    c = 50 + 2.3 * (d*100 - 60); 
                    printf("Your Ideal Weight is :%.2f kg",c);
                } else{
                    c = 45.5 + 2.3 * (d*100 - 60); 
                    printf("Your Ideal Weight is :%.2f kg",c);
                }
            }
            break;
        case 4:
            if (e<0) {
                printf("invalid input");
            } else{
                c = 220 - e; 
                printf("Max HR: %.2f bpm\n", c);
                printf("Heart Rate Zones:\n");
                printf("50-60%%: %.2f - %.2f bpm\n", c*0.5, c*0.6);
                printf("60-70%%: %.2f - %.2f bpm\n", c*0.6, c*0.7);
                printf("70-80%%: %.2f - %.2f bpm\n", c*0.7, c*0.8);
                printf("80-90%%: %.2f - %.2f bpm\n", c*0.8, c*0.9);
                printf("90-100%%: %.2f - %.2f bpm\n", c*0.9, c*1.0);
            }
            break;
    }
    return 0;
}			
					
			
					

