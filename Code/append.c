#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fptr;
    fptr = fopen("apple.txt","a");
    fprintf(fptr,"%c",'A');
    fprintf(fptr,"%c",'A');
    fprintf(fptr,"%c",'A');
    fprintf(fptr,"%c",'A');
    fprintf(fptr,"%c",'A');
    fclose(fptr);
}