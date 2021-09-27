#include <stdio.h>

int main(){

    int N, i, j;

    printf("Escriba la longitud de su matriz:");
    scanf("%d", &N);

    int matriz[N][N];

    for(i=0 ;i  < N ;i++)
    {
        for(j = 0; j < N;j++)
        {
            printf("Dame el valor de la matriz en la posicion[%i][%i]: \n",i,j);
            scanf("%i", &matriz[i][j]);
        }
    }

    for(i = 0; i < N; i++)
    {
        for(j = 0; j < N; j++)
        {
        if(matriz[i][j] != matriz[j][i])
        {
            printf("la matriz no es simetrica\n");
            return 0;
        }
        }
    }
    printf("la matriz es simetrica uwu\n");
    return 0;
}
