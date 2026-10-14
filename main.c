#include <stdio.h>

int main() {
    int linhas;
    int t[20][20];

    printf("Digite o numero de linhas: "); 
    scanf("%d", &linhas);

    printf("\n");

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                t[i][j] = 1;
            } else {
                t[i][j] = t[i - 1][j - 1] + t[i - 1][j];
            }

            printf("%d ", t[i][j]); // imprime o resultado com espaçamento
        }
        printf("\n");
    }

    return 0;
}