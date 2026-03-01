#include<stdio.h>
int main()
{
    int balance=500 , withdrawal;
    while(balance>0)
    { 
    printf("Enter the withdrawal amount:");
    scanf("%d",&withdrawal);
    balance=balance-withdrawal;
    }
    printf("Balance Exahusted ...");
}
