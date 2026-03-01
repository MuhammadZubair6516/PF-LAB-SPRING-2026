#include<stdio.h>
int main()
{
int score,distinction=0,fail=0,pass=0 ;
while(score!=-1){
printf("Enter your Score(-1 to stop): ");
scanf("%d",&score);
if(score>=75){distinction++;}
else if(score>49 && score<75){pass++;}
else if(score!=-1){fail++;}
}
printf("Distinction:%d\n",distinction);
printf("Pass:%d\n",pass);
printf("Fail:%d\n",fail);
}

