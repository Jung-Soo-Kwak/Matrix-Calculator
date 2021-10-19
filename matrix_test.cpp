#include<stdio.h>
#include "matrix_add.h"
#include "matrix_mul.h"


int main() {


    int A[3][3] = {
        { 1, 2, 3 },
        { 2, 3, 4 },
        { 3, 4, 5 }
    }

    int B[3][3]; {
        { 0, 1, 2 },
        { 1, 2, 3 },
        { 2, 3, 4 }
    }

    matrix_add(A, input1, input2, B, input3, input4);
    matrix_mul(A, input1, input2, B, input3, input4);

    return 0;
}