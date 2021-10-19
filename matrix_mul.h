#include <stdio.h>

void matrix_mul(int A[][3], int Acol, int Arow, int B[][3], int Bcol, int Brow)
{
    if (Arow != Bcol) {

        printf("#####CAN NOT CALCULATE#####");

    }
    else {

        int mul[3][3];

        for (int i = 0; i < Acol; i++)

            for (int j = 0; j < Brow; j++) {

                mul[i][j] = 0;

                for (int k = 0; k < Bcol; k++)

                    mul[i][j] += A[i][k] * B[k][j];

            }

        printf("AB is\n");

        for (int i = 0; i < Acol; i++) {

            for (int j = 0; j < Brow; j++) {

                printf("%d ", mul[i][j]);

            }

            printf("\n");

        }
    }
}