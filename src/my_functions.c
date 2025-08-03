#include "my_functions.h"
#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <conio.h>

#define __BLUE   "\033[34m"
#define __RED    "\033[31m"
#define __WHITE  "\033[37m"

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
        
        if (isBackspace(string[string_pos]) && 0 != string_pos)
        {
            string_pos--;
            printf("\b \b");
        }
        else if (isNumber(string[string_pos]))
        {
            printf(__BLUE "%c" __WHITE, string[string_pos]);
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

bool isBackspace(uint8_t myChar)
{
    return ('\b' == myChar);
}

bool isNumber (uint8_t myChar)
{
    return ((myChar >= '0') && (myChar <= '9'));
}