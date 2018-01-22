/**************************************************************************/
/*Program accept coins from the user (user enters integers 5, 10, or 25), until the user enters zero. Thengive the user a choice (with menu) for coffee or /*tea. If the amount deposited is sufficient, print the selection and calculate the change. If the amount deposited is not sufficient, display a message for /*insufficient amount and return the money.
/*Coded by: Evense Zetrenne
/**************************************************************************/

#include <stdio.h>
#define COFFEE 25
#define TEA 15

int main(void)
{

        int coins = 0;
        int funds = 0;
        int choice = 0;


        do
{
        printf("Insert coins: ");
        scanf("%d", &coins);
        funds += coins;
}

                while(coins != 0);

        printf("Please select from the following menu: 1 - coffee, 2 - tea\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice == 1){
        choice = COFFEE;
        printf(" Coffee despensing\n");
        int cents = funds - choice;
        printf("Your change is %d cents.", cents);
}

        else if (choice == 2 )
        {
		choice = TEA;
        printf("Tea despensing\n");
        int cents = funds - choice;
        printf("Your change is %d cents.", cents);
        }
		else
		{
		printf("Insufficient amount\n");

        }
	return 0;
}



