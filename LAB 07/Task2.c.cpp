#include <stdio.h>

int main() {
    int a[10], i,num,j=0 ;

    printf("Enter 10 Numbers:");
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);}
    printf("Enter Number to search:");  
    scanf("%d",&num);  
    for(i=0 ; i<10 ; i++){
    if(a[i]==num){
    j+=1;}
    }
   if(j>0){
   printf("The searching num %d occurs %d times!",num,j);
   }
   else{
   printf("Result Not Found. .."); }
   }