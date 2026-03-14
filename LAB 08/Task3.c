#include <stdio.h>
int main()
{ int temp[7][3], i, j ,highest,total,day=1; float avg;
    for(i = 0; i < 7; i++)
    {
        printf("Day %d:\n", i+1);
        for(j = 0; j < 3; j++)
        {
            printf("Enter temperature: ");
            scanf("%d", &temp[i][j]);
        }}
        for(i = 0; i < 7; i++)
    {
        for(j = 0; j < 3; j++)
        {
        	if(temp[i][j]>highest){
    	highest = temp[i][j];}
        }
	}printf("The highest temperature recorded in the week is:%d\n",highest);
	printf("The average temperature for each day:\n");
	for(i = 0; i < 7; i++)
    {
        for(j = 0; j < 3; j++)
        {
        	total+=temp[i][j];
        	avg= total/3.0 ;
        } total =0;
        printf("Day %d : %.2lf\n",day++,avg);
	} 
}
    
