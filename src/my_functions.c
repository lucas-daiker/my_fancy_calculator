#include "my_functions.h"
#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <conio.h>


#define __RED     "\033[31m"
#define __GREEN   "\033[32m"
#define __YELLOW  "\033[33m"
#define __BLUE    "\033[34m"
#define __MAGENTA "\033[35m"
#define __CYAN    "\033[36m"
#define __WHITE   "\033[37m"

typedef enum {
    Typ_None,
    Typ_Opperater,
    Typ_Number,
    Typ_Variable
}Typ;

void welcome(void)
{
    printf("\033[31m%s\033[37m","Hello to my fanzy calculator!!!\n\n\n");
}

int get_input(uint8_t* string, uint16_t* numbers)
{
    uint8_t string_pos = 0; 
    uint8_t numbers_pos = 0;

    Typ current_typ = Typ_None;

    
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
            if ((current_typ != Typ_Number) && )
            {
                /* code */
            }
            
            printf(__BLUE "%c" __WHITE, string[string_pos]);
        }
        else if (isOperater(string[string_pos]))
        {
            printf(__YELLOW "%c" __WHITE, string[string_pos]);
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

bool isOperater (uint8_t myChar)
{
    return (
        '+' == myChar ||
        '-' == myChar ||
        '*' == myChar ||
        '/' == myChar 
    );
}