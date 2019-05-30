//
// Created by yukish on 19.05.19.
//

#ifndef STRDATA_MATRIXMULTIPLICATIONS_H
#define STRDATA_MATRIXMULTIPLICATIONS_H

#include <iostream>
#include <cstdio>
#include <ctime>
#include <stdlib.h>

using namespace std;

class matrix {
    static const int nrows = 4;
    static const int ncols = 4;

    // Allocate matrices for multiplication
    double (*matrix_a)[ncols] = (double (*)[ncols]) malloc(sizeof(double) * (nrows) * (ncols));
    double (*matrix_b)[ncols] = (double (*)[ncols]) malloc(sizeof(double) * (nrows) * (ncols));
    double (*matrix_c)[ncols] = (double (*)[ncols]) malloc(sizeof(double) * (nrows) * (ncols));

public:
    matrix() {
        // Initialize matrices
        for (int i = 0; i < nrows; i++) {
            for (int j = 0; j < nrows; j++) {
                matrix_a[i][j] = (double) rand() / (double) RAND_MAX;
                matrix_b[i][j] = (double) rand() / (double) RAND_MAX;
            }
        }
    }

    void multiplication() {
        // Multiply matrices
        for (int i = 0; i < nrows; i++) {
            for (int j = 0; j < ncols; j++) {
                matrix_c[i][j] = 0.0;
                for (int k = 0; k < ncols; k++) {
                    matrix_c[i][j] += matrix_a[i][k] * matrix_b[k][j];
                }
            }
        }
    }

    void free() {
        ::free(matrix_a);
        ::free(matrix_b);
        ::free(matrix_c);
    }
};

#endif //STRDATA_MATRIXMULTIPLICATIONS_H
