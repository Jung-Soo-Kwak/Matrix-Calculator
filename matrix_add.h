#include <stdio.h>

void matrix_add(int A[][3], int Acol, int Arow, int B[][3], int Bcol, int Brow)
{
    if (Acol != Bcol || Arow != Brow) {

        printf("#####CAN NOT CALCULATE#####");

    }
    else {

        int plus[3][3];
        int minus[3][3];

        for (int i = 0; i < Acol; i++) {

            for (int j = 0; j < Arow; j++) {

                plus[i][j] = A[i][j] + B[i][j];

                minus[i][j] = A[i][j] - B[i][j];

            }

        }

        printf("A + B is\n");

        for (int i = 0; i < Acol; i++) {

            for (int j = 0; j < Arow; j++) {

                printf("%d ", plus[i][j]);

            }

            printf("\n");

        }



        printf("A - B is\n");

        for (int i = 0; i < Acol; i++) {

            for (int j = 0; j < Arow; j++) {

                printf("%d ", minus[i][j]);

            }

            printf("\n");

        }
    }
}