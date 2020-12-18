//
// Created by Rusewww on 12/16/20.
//

#include "lib.h"

float do_operation(int operand_left, int operand_right, char oper) {
    float result = 0;
    switch (oper) {
        case '+' : result = operand_left + operand_right; break;
        case '-' : result = operand_left - operand_right; break;
        case '*' : result = operand_left * operand_right; break;
        case '/' :
            if (operand_right != 0) {
                result = (float) operand_left / (float) operand_right;
            }
            break;
        default: result = 0;
    }
    return result;
}

void fill_array(float *array, int size) {
    for (int i = 0; i < size; ++i) {
        *(array + i) = rand() % 11 - 5;
    }
}

int get_negative_pos(float *array, int size, int pos) {
    int counter = 0;
    int result = -1;
    for (int i = 0; i < size; ++i) {
        if (*(array + i) < 0) {
            counter++;
        }
        if (counter >= pos) {
            result = i;
            break;
        }
    }

    return result;
}
