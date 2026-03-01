#include <stdio.h>
int main() 
{
int choice,i,j,sum,sub;
do{
printf("...MENU...\n1.Addition\n2.Subtraction\n3.Exit\n");
printf("Enter Your Choice :");
scanf("%d",&choice);
if(choice==1 || choice==2)
{
printf("Enter Any two Numbers:\n");
scanf("%d%d",&i,&j);
if(choice==1)
{
printf("The Addition of two Numbers is :%d\n",sum=i+j);
}
else if(choice==2)
{
printf("The Subtraction of two Numbers is :%d\n",sub=i-j);
}
}
}
while(choice!=3);
}

