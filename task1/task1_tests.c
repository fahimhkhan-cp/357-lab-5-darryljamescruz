#include "checkit.h"
#include "task1.h"

void test1() {
   char input[] = "Hello THERE";
   char result[15];
   char *expected = "hello there";

   str_lower(input, result);

   checkit_string(result, expected);
}

void test_lower_mutate() {
   char test_str[] = "HELLO";
   str_lower_mutate(test_str);
   checkit_string(test_str, "hello");
}

int main(void) {
   test1();
   test_lower_mutate();
   return 0;
}
