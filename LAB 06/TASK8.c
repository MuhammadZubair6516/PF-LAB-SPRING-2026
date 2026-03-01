#include <stdio.h>
int main() 
{
int num;
while(num!=7)
{
printf("Guess The Correct Number :");
scanf("%d",&num);
if(num>7)
{
printf("Too High...\n");
}
else if(num<7)
{
printf("Too Low...\n");
}
else
{
printf("Correct Number!");
}
}
}

