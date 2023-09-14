#include <stdio.h>

int main()

{

    FILE* file = fopen("Data/41.txt", "r");

    char line[256];

    int i = 0;

    while (fgets(line, sizeof(line), file)) {

        i++;

        if(i == 1)

        {

            printf("%s\n", line);   

        }

    }

    fclose(file);

    return 0;

}