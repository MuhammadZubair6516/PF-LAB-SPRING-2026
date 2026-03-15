#include<stdio.h>
int main()
{
	int i,j,total,s,hall [5][6] = {{0,1,0,1,0,1},{1,1,0,0,1,1},{0,1,0,0,0,1},{0,0,0,0,0,1},{1,1,0,0,0,1}} ,avg;
       for (i = 0; i<5; i++) {
           for (j = 0; j<6; j++) {
            printf("%d ",marks[i][j]);   
}
            printf("\n");   
}
printf("total marks of each student:\n");
s=1;
 for (i = 0;i<4; i++) {
           for (j = 0; j<3; j++) {
           total+=marks[i][j];   
}
printf("Student %d :%d",s++,total);
            printf("\n"); 
			total =0;  
}s=1;
printf("average marks of each subject:\n");
for (i = 0;i<3; i++) {
           for (j = 0; j<4; j++) {
           total+=marks[j][i];  
		   avg = total/4; 
}
printf("Subject %d :%d",s++,avg);
            printf("\n"); 
			total =0;  
}
}
