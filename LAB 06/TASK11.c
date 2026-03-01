#include<stdio.h>
int main()
{
int price,choice,final, sum=0,discount;
do{
printf("Enter The price of Product :");
scanf("%d",&price);
sum=sum+price;
printf("Do you want to add another product :\n1.Yes\n0.No\n");
scanf("%d",&choice);
}while(choice!=0);
printf("The total bill amount is :%d\n",sum);
if(sum>5000)
{
discount=((0.05)*sum) ;
final =sum-discount;
printf("The Final Payable Amount after discount is:%d",final);
}
}

