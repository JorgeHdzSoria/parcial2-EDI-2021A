#include <stdio.h>

int main(){

  int filas, columnas;

      printf("Dame el numero de filas de las Matrices:\n");
    scanf("%d", &filas);

    printf("Dame el numero de columnas de las Matrices:\n");
    scanf("%d", &columnas);

    int matriz[filas][columnas];

    int i, j;

    for(i = 0; i < filas; i++){

        for(j = 0; j < columnas; j++){

            printf("Dame el valor de la matriz en la posicion[%d][%d]: \n",i,j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Tu matriz es:\n");

    for(i = 0; i < filas ;i++){
        for(j = 0; j < columnas; j++){
            printf("[%i]", matriz[i][j]);
        }
    printf("\n");
    }

    printf("Y su transpuesta es:\n");

    for(j = 0; j < columnas; j++){
        for(i = 0; i < filas; i++){
            printf("[%i]", matriz[i][j]);
        }
    printf("\n");
    }

}
