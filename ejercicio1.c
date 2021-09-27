#include <stdio.h>

int main(){

  int filas,columnas;

  	printf("Dame el numero de filas de las Matrices:\n");
	scanf("%i",&filas);

    printf("Dame el numero de columnas de las Matrices:\n");
    scanf("%i",&columnas);

    int matriz[filas][columnas];

    int i,j;

    for(i=0;i<filas;i++){

        for(j=0;j<columnas;j++){
        	
            printf("Dame el valor de la matriz en la posicion[%i][%i]: \n",i,j);
            scanf("%i",&matriz[i][j]);
        }
    }

    printf("La matriz es:\n");

    for(i=0;i<filas;i++){
        for(j=0;j<columnas;j++){
            printf("[%i]",matriz[i][j]);
    	}
    printf("\n");
    }
    
    int sumaColumna;
    for(columnas = 0; columnas < i; columnas++){   	
    	sumaColumna = 0;
    	
    	for(filas = 0; filas < j; filas++)
    		{
       		sumaColumna += matriz[filas][columnas];
    		}
    	printf("La suma de la columna %d es:%d\n", columnas, sumaColumna);
	}		    
}

