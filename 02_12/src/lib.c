//
// Created by Rusewww on 12/2/20.
//
#include <stdlib.h>
void randomize(int* arr, int size){
        for (int i = 0; i < size; i++){
                *(arr + i) = rand() % 10;
        }
}

void fill_mas3(int* arr1, int size1, int* arr2, int size2, int* res){
        for (int i = 0; i < size1; i++){
                *(res + i) =*(arr1 + i);
        }
        for (int i = 0; i < size2; i++){
                *(res + i + size1) =*(arr2 + i);
        }
}
void swap (int *a, int *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
}

void sort(int* arr, int size){
        for (int i = 0; i < size; i++){
                for (int j = 0; j < size; j++){
                        if (*(arr + j) < *(arr + j + i)){
                                swap((arr + j), (arr + j + 1));
                        }
                }
        }
}