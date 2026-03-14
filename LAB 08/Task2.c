#include<stdio.h>
int main()
{
	int i,j,seat=0,max=0,row=1,hall [5][6] = {{0,1,0,1,0,1},{1,1,1,0,1,1},{0,1,0,0,0,1},{0,0,0,0,0,1},{1,1,0,0,0,1}} ,avg;
       for (i = 0; i<5; i++) {
           for (j = 0; j<6; j++) {
            printf("%d ",hall[i][j]);}
            printf("\n");   
}
 for (i = 0;i<5; i++) {
           for (j = 0; j<6; j++) {
           if(hall[i][j]==0)
		   { seat++;}   
} } printf("seats are available:%d\n",seat);  seat=0;      
        for (i =0;i<5; i++) {
           for (j = 0; j<6; j++) {
           if(hall[i][j]==1)
		   { seat++;}}
 if(seat > max)
    {
        max = seat;
        row = i + 1;
    }
    seat = 0;
}
printf("row has the maximum booked seats:%d\n",row);
}


