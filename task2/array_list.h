#ifndef ARRAY_LIST_H
#define ARRAY_LIST_H

typedef struct {
    char **array;   // Array of string pointers
    int capacity;   // Current capacity of the array
    int length; // Number of elements in the array
} ArrayList;

ArrayList *array_list_new(int initial_capacity);
void array_list_add_to_end(ArrayList *list, char *str);

#endif