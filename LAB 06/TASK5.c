#include<stdio.h>
int main()
{
int temp,sum=0,count=0,avg;

while(temp>-999)
{
printf("Enter Temp Reading : ");
scanf("%d",&temp);
if(temp!=-999){
sum = sum+temp;
count++;
}
avg = sum/count;
}
printf("Average of temp is :%d",avg);
}

