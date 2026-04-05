#include <stdio.h> 
int main() { 
void *sensor; 
int vibrations = 327; 
float temperature = 81.1; 
char status = 'N'; 
sensor = &vibrations; 
printf("Vibration: %d \n", *(int *)sensor); 
printf("Address: %p\n", (void *)sensor); 
sensor = &temperature; 
printf("\nTemperature: %.1f \n", *(float *)sensor); 
printf("Address: %p\n", (void *)sensor); 
sensor = &status; 
printf("\nStatus : %c\n", *(char *)sensor); 
printf("Address: %p\n", (void *)sensor); 
printf("\n=== Status Alert ===\n"); 
if (*(char *)sensor == 'N') 
printf("All systems normal.\n"); 
else if (*(char *)sensor == 'W') 
printf("Warning! Check sensor readings.\n"); 
else if (*(char *)sensor == 'C') 
printf("CRITICAL! Immediate action required.\n"); 
return 0; 
} 
