#include <stdio.h>

int main() {
    int a[10], i,avgp=0,avgf=0,pass[10], fail[10],p=0,f=0;

    printf("Enter Students Marks (-1 to exit):\n");
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);}
    for (i=0 ; i<10;i++){
   if(a[i]>=5 && a[i]<=10)
   {
   pass[p++]=a[i];
   avgp+=a[i];
   }
   else if(a[i]>=1 && a[i]<5)
   {
   fail[f++]=a[i];
  avgf+=a[i];
   }
   }
   printf("The pass students marks :");
   for(i=0 ; i<p ; i++) 
   { printf("%d ",pass[i]);
   }
   printf("\nThe Fail students marks :");
   for(i=0 ; i<f ; i++) 
   { printf("%d ",fail[i]);
   }
   if(p>0) printf("\nAverage Pass = %d",avgp/p);
   if(f>0) printf("\nAverage Fail = %d",avgf/f);
    }