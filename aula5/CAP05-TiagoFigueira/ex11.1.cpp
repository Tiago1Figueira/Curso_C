#include <stdio.h>
#include <stdlib.h>

int main() {
    int linha = 1, coluna = 1;

    while (linha <= 4) {
        coluna = 1;
        while (coluna <= 4) {
            printf("%3d", linha * coluna);
            coluna++;
        }
        printf("\n");
        linha++;
    }

    return 0;
}

