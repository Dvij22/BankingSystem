#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE *ptr;
    ptr = fopen("Data/41.txt","r");
    char info;
    char line[200];
    while ( fgets(line, sizeof(line), ptr))
    {
        if(info == 'N'){
             
        printf("%s",line);
        }
       

    }
    fclose(ptr);
    return 0;
    

}