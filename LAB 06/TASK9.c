#include<stdio.h>
int main()
{
int i,num, sum=0 ;
printf("Enter the Number Of boxes : ");
scanf("%d",&num);
for(i =1 ; i<=num ; i++)
{
sum=sum+i;
}
printf("The total Number Of Decorative items required are:%d",sum);
}

