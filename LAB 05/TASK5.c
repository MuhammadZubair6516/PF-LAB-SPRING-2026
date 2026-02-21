#include <stdio.h>

int main() {
    int a ;
    printf("Enter Your Service :");
    scanf("%d",&a);
   (a>15)? printf("35%% of Salary") : (a>7) ? printf("20%% of Salary"): printf("5%% of Salary");
    return 0;
}
