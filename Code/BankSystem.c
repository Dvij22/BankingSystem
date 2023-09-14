#include <stdio.h>
#include "CreateProfile.c"
#include "Deposit.c"
#include "withdrawal.c"



int main()
{   
    int option;
    printf("Welcome to the Banking System\n");
    do
    {
        printf("Menu\n");
        printf("Enter 1: Create a new profile\n");
        printf("Enter 2: Deposit Money\n");
        printf("Enter 3: Withdraw Money\n");
        printf("Enter 4: Quit\n");
        printf("Enter your option: ");
        scanf("%d",&option);

        switch (option)
        {
        case 1:
            printf("You have selected to create your new profile\n");
            createProfile();
            break;
        case 2:
            printf("You have selected to deposit your money\n");
            deposit();
            break;
        case 3:
            printf("You have selected to withdraw your money\n");
            withdraw();
            break;
        case 4:
            printf("You have selected to quit\n");            
            break;
        default:
            printf("Please enter a valid number\n");
            break;
        }
    }while (option!=4);


    

    return 0;
}


