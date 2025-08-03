#include "my_functions.h"
#include <stdio.h>
#include <stdint.h>
#include <conio.h>

void welcome(void)
{
    printf("\033[31m%s\033[37m","Hello to my fanzy calculator!!!\n\n\n");
}

int get_input(uint8_t* string)
{
    uint8_t string_pos = 0;
    
    printf("Enter calculation: ");

    while((0 == string_pos) || ('\n'  != string[string_pos - 1]) && ('\r'  != string[string_pos - 1]))
    {
        string[string_pos] = _getch();
        
        if ('\b' == string[string_pos] && 0 != string_pos)
        {
            string_pos--;
            printf("\b");
        }
        else
        {
            printf("%c", string[string_pos]);
            string_pos++;
        }
        


        
    }
    
    printf("I will calculate the following for you: ");

    for (uint8_t i = 0; i < string_pos; i++)
    {
        printf("%c",string[i]);
    }

    return string_pos;

}