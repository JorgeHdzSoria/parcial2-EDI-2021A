#include <stdio.h>

int main(){

    int N, i, j;

    printf("Inserte el numero de filas y columnas de su matriz cuadrada:\n");
    scanf("%d", &N);

    int matriz[N][N];
    for(i=0; i < N; i++){
        for(j=0; j < N; j++){

            if (i == j){
                matriz[i][j] = 1;
            }
            else
                matriz[i][j] = 0;
            printf("[%i]", matriz[i][j]);
        }
    printf("\n");
    }

    return 0;
}
