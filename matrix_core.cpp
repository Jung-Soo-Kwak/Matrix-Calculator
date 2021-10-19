#include<stdio.h>
#include "matrix_add.h"


int main() {

    int input1, input2, input3, input4, temp;

    int A[3][3];
    int B[3][3];

    printf("A col, A row (max 3x3)>>");

    scanf("%d %d", &input1, &input2);

    printf("A start form (0,0)\n");

    for (int i = 0; i < input1; i++) {

        for (int j = 0; j < input2; j++) {

            scanf("%d", & temp);

            A[i][j] = temp;

        }

    }

    printf("B col, B row(max 3x3)>>");

    scanf("%d %d", & input3, & input4);



    printf("B start form (0,0)\n");

    for (int i = 0; i < input3; i++) {

        for (int j = 0; j < input4; j++) {

            scanf("%d", & temp);

            B[i][j] = temp;

        }

    }

    matrix_add(A, input1, input2, B, input3, input4);

    return 0;
}