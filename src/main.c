#include "stdio.h"
#include "stdint.h"
#include "my_functions.h"

int main (void)
{
    uint8_t string[256];        //stores the string as it is entered

    uint16_t numbers[127];      //stores the numbers in the order they are entered


    welcome();

    while (1)
    {
        get_input(string);
    }
    
    return 1;
}