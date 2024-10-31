#include "task1.h"
#include <ctype.h>

void str_lower(char *orig, char *copy) {
    while (*orig) {
        *copy = tolower(*orig);  //use tolower() to lower the char
        orig++;    //increment the input pointer
        copy++;   //increment the buffer pointer
    }
    *copy = '\0'; //make sure the string is null-terminated
}

void str_lower_mutate(char *orig) {
    while (*orig) {
        *orig = tolower(*orig);       //mutate the original input
        orig++;                        //increment through the input string
    }
}