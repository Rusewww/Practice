#include "lib.h"
#include <stdlib.h>
#include <stdio.h>
int main () {

        int N = 5;
        int M = 7;
        int *arr1 = (int*) malloc(N * sizeof(int));
        int *arr2 = (int*) malloc(M * sizeof(int));
        int *arr3 = (int*) malloc((N + M) * sizeof(int));

        randomize(arr1, N);
        randomize(arr2, M);

        fill_mas3(arr1, N, arr2, M, arr3);

        sort(arr3, N+M);

        free(arr1);
        free(arr2);
        free(arr3);
        return 0;
}
/*
 * int size = 0;
    printf("Input array size: ");
    scanf("%d", &size);
    int *arr = (int*) malloc(size * sizeof(int));
    for (int i = 0; i < size; i++) {
        *(arr + i) = rand() % 10;
    }
     int sum = 0;
        for (int i = 0; i < size; i++) {
                sum += *(arr + i); //sum += arr[i]
        }
 */

