#include <stdio.h>
#include <stdlib.h>
#include <cblas.h>

void printResult(float array[]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%f ", array[i * 3 + j]);
        }
        printf("\n");
    }
}

int main() {
    // Deklariere die Matrizen
    float a[3 * 3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    float c[3 * 3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    // Setze ldc auf einen gültigen Wert
    int ldc = 3;

    // Führe die symmetrische Matrix-Matrix-Multiplikation aus
    cblas_ssyrk(CblasColMajor,
                CblasLower,
                CblasConjNoTrans,
                3,
                3,
                1.0f,
                a,
                ldc,
                1.0f,
                c,
                ldc);

    // Gib die Matrix c aus
    printResult(c);

    return 0;
}
