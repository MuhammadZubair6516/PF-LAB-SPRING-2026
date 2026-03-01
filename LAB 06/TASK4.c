#include<stdio.h>
int main()
{
int i,num, sum=0 ;
printf("Enter a Number : ");
scanf("%d",&num);
for(i =1 ; i<=num ; i++)
{
sum=sum+i;
}
printf("The Sum of the First N Natural Numbers are :%d",sum);
}

