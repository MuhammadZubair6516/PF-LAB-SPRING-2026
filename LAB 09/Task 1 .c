#include<stdio.h>
float triagescore(int s , int v , int a )
{
	return (s*0.5)+(v*0.2)+(a*0.3);
}
int main()
{
	int a ,b ,c ;
	float score ;
	printf("enter severity (1 to 10) :");
	scanf ("%d",&a);
	printf("enter age risk (1 to 10)  :");
	scanf ("%d",&b);
	printf("enter vital (1 to 10) :");
	scanf ("%d",&c);
	score = triagescore (a,b,c);
	printf("triage score : %.2lf\n",score);
	if(score>7){
		printf("Immediate attention required\n");
	}
		else if(score>=4 && score<=7){
		printf("Moderate\n");
       }
       else
       {
		printf("It can wait \n");
	}
	return 0;
	
}

