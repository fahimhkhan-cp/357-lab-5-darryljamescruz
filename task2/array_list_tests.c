#include "array_list.h"
#include "checkit.h"

void test_array_list_add() {
    ArrayList *list = array_list_new(2);        //set array size to 2 spots (enough for hello world)
    array_list_add_to_end(list, "hello");
    array_list_add_to_end(list, "world");
    array_list_add_to_end(list, "resize test"); // should trigger resize to 3 spots

    checkit_string(list->array[0], "hello");
    checkit_string(list->array[1], "world");
    checkit_string(list->array[2], "resize test");
}

int main() {
    test_array_list_add();
    return 0;
}
