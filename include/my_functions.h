#ifndef MY_FUNCTIONS_H
#define MY_FUNCTIONS_H
    #include <stdint.h>
    #include <stdbool.h>

    void welcome (void);
    int get_input(uint8_t* string);

    bool isBackspace(uint8_t myChar);
    bool isNumber(uint8_t myChar);
    bool isOperater(uint8_t myChar);


#endif