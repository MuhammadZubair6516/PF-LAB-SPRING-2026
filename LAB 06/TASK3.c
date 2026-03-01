#include<stdio.h>
int main()
{
int pass;
do{
printf("Enter Your Password in digits : ");
scanf("%d",&pass);
} while(pass!=1234);
if(pass==1234)
{
printf("Correct Password!");	
}
}

