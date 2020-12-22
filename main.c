#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{

    printf("zadacha 1A (uberem lishnie probeli)\n");
    printf("vvedite stroku\n");
    char s[100];
    gets(s);
    char * pch = strtok (s," ");
    printf("otvet:\n");
    while (pch != NULL)
    {
        printf("%s", pch);
        pch = strtok(NULL," ");
        if (strcmp(pch, ".") != 0)
            printf(" ");
    }
    printf("\n");



    return 0;
}
