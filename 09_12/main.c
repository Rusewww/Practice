//
// Created by Rusewww on 12/9/20.
//

// Null String C Strings

#include <string.h>
#include <ctype.h>
// #include <stdbool.h>
#include <stdlib.h>

int lowercaseCount(char array[]);

int get_delta(char * original_code, char start, char end) {
    int count = 0;

    for (int i = 0; i < strlen(original_code); i++) {
        if (original_code[i] == start) {
            count++;
        } else if (original_code[i] == end) {
            count--;
        }
    }
    return count;
}

int main() {
// a b c d e .. x y z
// shift = +2
// c d e .....  z a b
    char * original_code = "int main(  for (int i = 0; i < 25; i++) { if (i < 5) { action(); } } }";

    int count_curly = get_delta(original_code, '{', '}');
    int count_curve = get_delta(original_code, '(', ')');
    int count_square = get_delta(original_code, '[', ']');

    return 0;
}

int lowercaseCount(char array[]) {
    int count = 0;
    for (int i = 0; i < strlen(array); i++) {
        _Bool is_lowercase = islower(array[i]);
        if (is_lowercase) {
            count++;
        }
    }
    return 0;
}