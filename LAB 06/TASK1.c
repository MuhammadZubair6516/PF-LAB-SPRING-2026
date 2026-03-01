#include<stdio.h>
int main()
{
	int i,j , sum=0;
	for(i=1 ; i<=5 ; i++)
	{
	printf("ENTER YOUR ATTENDENCE 0-1 :");
	scanf("%d",&j);
    if(j==1 || j==0){
    if(j==1){
    	printf("PRESENT\n");
        sum=sum+j;
	} 
	else
	{
		printf("ABSENT\n");
	}
}
    else{
        printf("INVALID\n");
    }
    }
	printf("The total number of students present:%d",sum);
    
}

