#include <stdio.h>
#include <stdlib.h>
#include "../service/Func.h"

/**
 * функція створю матрицю
 */
int **matrix(int row, int colum, int min, int max) {
    int **arr = malloc(row * sizeof(int *));
    for (int i = 0; i < row; i++) {
        arr[i] = malloc(colum * sizeof(int));
        if (arr[i] == NULL) {
            free(arr);
            return NULL;
        }
        for (int j = 0; j < colum; j++) {
            arr[i][j] = random_num(min, max);
        }
    }
    return arr;
}
