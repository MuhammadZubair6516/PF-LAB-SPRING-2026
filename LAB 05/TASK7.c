#include<stdio.h>
int main()
{
	int card , pin , amount , balance=10000;
	
	printf("ENTER YOUR CARD NUMBER :");
	scanf("%d",&card);
	
	if(card==0000){
	printf("ENTER YOUR PIN :");
	scanf("%d",&pin);
	
	if (pin==6516){
	printf("ENTER YOUR ACCOUNT BALANCE : %d\n",balance);
	printf("ENTER YOUR TRANSACTION AMOUNT :");
	scanf("%d",&amount);
	
		if(amount>0 && amount<=balance){
			printf("TRANSACTION SUCCESSFUL.....");
		}
		else{
			printf("INSUFFICIENT FUNDS..... ");
		}
		
	}
	else{
		printf("INVALID PIN \n");
		}
	}
		else{
			printf("INVALID CARD\n");
	}

}
