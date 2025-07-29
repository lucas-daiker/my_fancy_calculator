#include "stdio.h"
#include "stdint.h"

#define __max_lnangth 259
 
int main ()
{
    uint8_t input[__max_lnangth];
    printf("Hello to my fancy calculator\n");
    printf("what would you like to calculate?\n");

    for (uint8_t i = 0; i < __max_lnangth; i++)
    {
        input[i] = getchar();

        if ((uint8_t)'\n' == input[i])
        {
            input[i] = '\0' ;
            break;
        }
        else
        {
            printf("%c", input[i]);
        }

    }
    
    return 1;
}