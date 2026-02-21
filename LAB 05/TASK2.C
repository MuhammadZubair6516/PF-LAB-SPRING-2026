#include<stdio.h>
#include<string.h>
int main()
{
    int data ; 
    char type[10]; 
    printf(" enter data :");
    scanf("%d" ,&data);
   if(data<=2)
   {
   printf("Rs. 50 per GB");
   }
   else if(data>2 && data<=10)
   {
   printf(" enter customer type (prepaid/postpaid) :");
    scanf("%s" ,&type);
   if(strcmp(type , "prepaid")==0)
   {
   printf("Rs. 40 per GB");
   }
    else if(strcmp(type , "postpaid")==0)
    {
    printf("Rs. 35 per GB");
    }
    }
    else if(data>10)
    {   
    printf(" Rs. 25 per GB");
   }
}
