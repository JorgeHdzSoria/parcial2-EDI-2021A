#include<stdio.h>
#define max 50

void encuentraMayor(int *r, int *c, int arreglo[max][max], int ren, int col, int *res)
{
    int aux = arreglo[0][0];

    int x, y;

    for(x = 0; x < ren; x++)
    {
    for(y = 0; y < col; y++)
        {

            if(aux < &arreglo[x][y])
            {
            *res = arreglo[x][y];
            *r = x;
            *c = y;
            }
        }
    }

    return aux;
}


int main()
{
    int arr[max][max];
    int r, c, renglones, columnas, res;
     printf("Dame el numero de filas de la matriz:\n");
    scanf("%d", &renglones);

    printf("Dame el numero de columnas de la matriz:\n");
    scanf("%d", &columnas);


	int i, j;
    for(i = 0; i < renglones; i++)
    {
        for(j = 0; j < columnas; j++)
        {
            printf("Dame el valor de la matriz en la posicion[%d][%d]: \n", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    encuentraMayor(&r, &c, arr, renglones, columnas, &res);

    printf("El numero mayor es %d y se encuentra en la posicion [%d][%d]", res, r, c);
    return 0;
}
