//
// Created by Rusewww on 12/16/20.
//
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "lib.h"
int main () {

#define STR "15+35"

    char * buffer;

    int op_left = strtol(STR, &buffer, 10);
    char op = buffer[0];
    int op_right = strtol(buffer + 1, NULL, 10);

    float result = do_operation(op_left, op_right, op);

 //   free(buffer);

    ///////////////////////////////////////////////////////////////


#define N 10
    srand(time(NULL));
    float arr[N];
    fill_array(arr, N);
    int pos1 = get_negative_pos(arr, N, 1);
    int pos2 = get_negative_pos(arr, N, 2);
    int size2 = pos2 - pos1 - 1; // FIXME

    float * arr2 = malloc(size2 * sizeof(float));
    for (int i = 0; i < size2; ++i) {
        *(arr2 + i) = arr[pos1 + i + 1];
    }

    free(arr2);

    /////////////////////////////////////////////////////////////////
    
    // Hello
    // H - o --> oellH
    // e - l --> olleH
    // l - l --> olleH
    // e - l --> oellH
    // H - o --> Hello
    
#define STR "abrakadabra"

    size_t str_length = strlen(STR);
    char * buf = malloc((str_length + 1) * sizeof (char));
    strcpy(buf, STR);
    for (int i = 0; i < str_length / 2; ++i) {
        int pos2 = str_length - 1 - i;

        char temp = buf[i];
        buf[i] = buf[pos2];
        buf[pos2] = temp;
    }
    
    free(buf);





    return 0;
}