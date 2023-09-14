#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include <dirent.h>
FILE *fptr;

int GetAccountNumber()
{
    int flag = 0;
    int accountNumber;

    do 
    {
        // Generate a new random number until you find a new one
        accountNumber = rand();
        char fileCheck[100];
        sprintf(fileCheck, "%d%s", accountNumber, ".txt");

        // Get all account numbers
        DIR *d = opendir ("./Data/");
        struct dirent *dir;

        flag = 1;
        if (d)
        {
            while ((dir = readdir(d)) != NULL)
            {
                // Check if this file exists
                if (!strcmp(dir->d_name, fileCheck))
                {
                    flag = 0;
                }
            }
            closedir(d);
        }
    } while (flag == 0);

    return accountNumber;
}

void SaveFile(char name[100], int phoneNum, char email[100], int balance , int accountNumber)
{
    char filename[200];
    sprintf(filename, "Data/%d%s", accountNumber, ".txt");
    fptr= fopen(filename,"w");
    fprintf(fptr,"Name: %s\n",name);
    fprintf(fptr,"Phone Number: %d\n",phoneNum);
    fprintf(fptr,"Email: %s\n",email);
    fprintf(fptr,"Balance: %d\n",balance);
    fprintf(fptr,"Account Number: %d\n",accountNumber );
    fclose(fptr);
}

void createProfile()
{
    char name[100];
    int phoneNum;
    char email[100];
    int balance=0;
    int accountNumber;
    printf("Welcome to Pandya's Bank\n");
    printf("Please enter your Name: ");
    scanf("%s",&name);
    printf("Please enter your phone number: ");
    scanf("%d",&phoneNum);
   // if (phoneNum!= 10)
    //{
   //     printf("Please enter a valid phone number\n ");
    //    printf("Please enter your phone number: ");
   //     scanf("%d",&phoneNum);

   // }
    
    printf("Please enter your Email Id: ");
    scanf("%s",&email);
    printf("Balance = %d\n",balance);
    accountNumber = GetAccountNumber();
    printf("This is your Account Number, Please take a note of it\n %d \n", accountNumber);

    SaveFile(name, phoneNum, email, balance, accountNumber);
}