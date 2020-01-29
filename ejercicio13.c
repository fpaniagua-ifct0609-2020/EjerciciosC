#include <stdio.h>
#define DIMENSION 3

void inicializar();
void mostrarTablero();

int tablero[DIMENSION][DIMENSION];

int main(int argc, char const *argv[])
{
    inicializar();
    mostrarTablero();
    return 0; 
}

void inicializar(){
    for (int fila=0;fila<DIMENSION;fila++){
        for (int col=0;col<DIMENSION;col++){
            tablero[fila][col]=0;
        }
    }
    printf("***SUPER TRES EN RAYA***\n");
}
void mostrarTablero(){
    for (int fila=0;fila<DIMENSION;fila++){
        for (int col=0;col<DIMENSION;col++){
            printf("%d ",tablero[fila][col]);
        }
        printf("\n");
    }
}