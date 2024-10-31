#include <stdlib.h>
#include "array_list.h"

// allocates memory for the array list structure and initializes the array
ArrayList *array_list_new(int initial_capacity) {
    ArrayList *list = malloc(sizeof(ArrayList));
    list -> array = malloc(initial_capacity * sizeof(char *));
    list -> capacity = initial_capacity;
    list -> length = 0;
    return list;
}

// adds a string to the end of the array list. If the array is full, it doubles the capacity.
void array_list_add_to_end(ArrayList *list, char *str) {
    if (list -> length == list->capacity) {
        list -> capacity *=2;
        list -> array = realloc(list -> array, list -> capacity * sizeof(char *));
    }
    list -> array[list -> length++] = str;
}