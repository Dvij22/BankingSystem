#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int deposit()
{
    FILE *ptr;
    int accNum;
    char fileName[100];
    printf("Enter your Account Number: ");
    scanf("%d", &accNum);
    sprintf(fileName, "Data/%d%s", accNum, ".txt");
    ptr= fopen(fileName,"r");
    char line[256];
    int i = 0;
    int balance;
    while (fgets(line, sizeof(line), ptr))
    {
        i++;
        if (i == 1)
        {
            printf("Your Name: %s", line);
            
         }
    }
     fclose(ptr);
     sprintf(fileName, "Data/%d%s", accNum, ".txt");
    ptr= fopen(fileName,"r");
    char line_[256];
    int i_ = 0;
    while (fgets(line_, sizeof(line_), ptr))
    {
        i_++;
        if (i_ == 4)
        {
            printf("Your Balance: %s", line_);
            int amount;
            printf("Enter the amount you want to deposit: ");
            scanf("%d", &amount);
            int balance = atoi(line_);
            int newBalance = balance + amount;
            printf("New Balance: %d\n",newBalance);
            sprintf(fileName, "Data/%d%s", accNum, ".txt");
            ptr = fopen(fileName, "a");
            fprintf(ptr, "New Balance: %d\n", newBalance);
            fclose(ptr);
        }
    }
     fclose(ptr);
    }
    

   
    

    
