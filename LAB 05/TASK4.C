#include<stdio.h>
int main()
{
int a ; 
printf("BOOK CATEGORIES :\n1. Fiction\n2. Non-Fication\n");
printf("Enter Your Choice : ") ;
scanf("%d" ,&a) ;
if(a==1)
{
printf("SUB-CATEGORIES\n1. Novel\n2. Comic\n");
printf("Enter Your Choice : ") ;
scanf("%d" ,&a) ;
if(a==1){
printf(" Price : Rs. 600\n") ;
}
else
{
printf("Price : Rs. 300\n ") ;
}
}
else if(a==2)
{
printf("SUB-CATEGORIES\n1. Biography\n2. Self-help\n");
printf("Enter Your Choice : ") ;
scanf("%d" ,&a) ;
if(a==1){
printf(" Price : Rs. 800\n") ;
}
else
{
printf("Price : Rs. 500\n ") ;
}
}
}
