#include <stdio.h> 
float totalRevenue(float bills[], int n) { 
float sum = 0; 
int i; 
for (i = 1; i < n; i++) 
sum = sum + bills[i]; 
return sum; 
} 
int bestTable(float bills[], int n) { 
int max = 0; 
int i; 
for (i = 1; i < n; i++) { 
if (bills[i] > bills[max]) 
max = i; 
} 
return max; 
} 
int isProfitable(float total) { 
if (total > 10000) 
return 1; 
else 
return 0; 
} 
int main() { 
float bills[6]; 
int i; 
printf("Enter bill amounts for 5 tables:\n"); 
for (i = 1; i < 6; i++) { 
printf("Table %d: Rs. ", i ); 
scanf("%f", &bills[i]); 
} 
float total = totalRevenue(bills, 6); 
int best = bestTable(bills, 6); 
int profit = isProfitable(total); 
printf("\nClosing Summary .......\n"); 
printf("Total Revenue: Rs. %.2f\n", total); 
printf("Best Table: Table %d \n", best ); 
if (profit == 1) 
printf("Verdict: Profitable \n"); 
else 
printf("Verdict: Non profitable.\n"); 
return 0; 
} 
