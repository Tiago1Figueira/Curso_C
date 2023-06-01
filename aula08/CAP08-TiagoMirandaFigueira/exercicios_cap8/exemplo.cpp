#include <stdio.h>

int main() {
    // Definindo a matriz de tamanho 3x3
    int matriz[3][3];
    
    int i, j, count = 1;
    
    // Preenchendo a matriz com valores de 1 a 9
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            matriz[i][j] = count;
            count++;
        }
    }
    
    // Imprimindo a matriz
    printf("Matriz:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

