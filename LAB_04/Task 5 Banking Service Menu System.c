#include<stdio.h>
int main()
{

int a , balance=10000 , amt ;
    printf(".......Menu......\n1.Balance\n2.Withdraw\n3.Deposit\n4.Exit\n");
    
	do
	{
	printf("Select: ");
    scanf("%d", &a);
    
    switch(a) {
            case 1:
                printf("Current Balance: %d\n", balance);
                break;
                
            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%d", &amt);
                if(amt > balance) {
                    printf("Insufficient Balance\n");
                } else if(amt < 0) {
                    printf("Invalid Amount\n");
                } else {
                    balance = balance - amt;
                    printf("Withdraw Successful. New Balance: %d\n", balance);
                }
                break;
                
            case 3:
                printf("Enter amount to deposit: ");
                scanf("%d", &amt);
                if(amt < 0) {
                    printf("Invalid Amount\n");
                } else {
                    balance = balance + amt;
                    printf("Deposit Successful. New Balance: %d\n", balance);
                }
                break;
                
            case 4:
                printf("Exiting...\n");
                break;
                
            default:
                printf("Invalid Choice\n");
        }
        
    } while(a != 4);

    return 0;
}

