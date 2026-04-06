#include <stdio.h>
#include <stdlib.h>

#define N 256 // Tamanho da matriz (256x256)

int A[N][N], B[N][N], C[N][N];

int main() {
    // Inicializando as matrizes
    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            A[i][j] = 1;
            B[i][j] = 2;
            C[i][j] = 0;
        }
    }

    // Multiplicação 
    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            for(int k=0; k<N; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    
    printf("Multiplicacao concluida!\n");
    return 0;
}