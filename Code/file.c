#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    FILE *fptr;
    fptr= fopen("Data/41.txt","r");
    char content[100];
    char content1;
    if (fptr!= NULL)
    {
       fgets(content,1000,fptr);
       printf("%s\n",content);
       
    }
    else{
        printf("File open unsuccessful");
    }

    if (fptr!= NULL)
    {
       fgets(content1,1000,fptr);
       printf("%d",content1);
       
    }
    else{
        printf("File open unsuccessful");
    }
    
   /*char ch;
    fscanf(fptr,"%c",&ch);
    printf("%c\n",ch);*/ 
    
    fclose(fptr);


}