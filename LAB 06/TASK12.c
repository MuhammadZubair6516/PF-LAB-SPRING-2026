#include <stdio.h>
int main() {
    int seats = 40, choice;
    while (choice!=0) {
printf("Seats remaining: %d\n", seats);
printf("Enter 1 to book, 0 to stop: ");
scanf("%d", &choice);
if (choice == 1) {
 seats--;
printf("Seat booked!\n");
 } 
 else if(choice!=0)
 {
 printf("Inavlid Choice...\n");
 }
 }
 printf("Booking closed. Seats left: %d\n", seats);
 
}

