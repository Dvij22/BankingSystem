#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
int withdraw()
{
    FILE *ptr;
    int accNum;
    char filename[100];
    printf("Please enter your Account Number: ");
    scanf("%d",&accNum);
    sprintf(filename, "%d%s", accNum, ".txt");
    ptr= fopen("Data/filename","r");
    char line[256];
    int i = 0;
    while (fgets(line, sizeof(line), ptr))
    {
        i++;
        if (i == 1)
        {
            printf("Your Name: %s", line);
            
         }
    }
     fclose(ptr);

     sprintf(filename, "Data/%d%s", accNum, ".txt");
    ptr= fopen(filename,"r");
    char line_[256];
    int i_ = 0;
    while (fgets(line_, sizeof(line_), ptr))
    {
        i_++;
        if (i_ == 4)
        {
            printf("Your Balance: %s", line_);
            int amount;
            printf("Enter the amount you want to withdraw: ");
            scanf("%d", &amount);
            int balance = atoi(line_);
            int newBalance = balance - amount;
            printf("Remaining Balance: %d\n",newBalance);
            sprintf(filename, "Data/%d%s", accNum, ".txt");
            ptr = fopen(filename, "a");
            fprintf(ptr, "%d\n", newBalance);
            fclose(ptr);
        }
    }
     fclose(ptr);


    

}