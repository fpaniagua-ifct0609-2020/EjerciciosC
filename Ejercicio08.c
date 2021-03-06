#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUMERO_MAXIMO 10
#define NUMERO_INTENTOS 5

int getRandom();

int main(int argc, char const *argv[])
{
    //Obtener el numero aleatorio
    int numeroAleatorio = getRandom();
    int numeroAdivino;
    int numeroErrores = 0;
    for (int i=0;i<NUMERO_INTENTOS;i++){
        printf("Introduce un numero:");
        scanf("%d",&numeroAdivino);
        if (numeroAdivino==numeroAleatorio){
            printf("Eres un adivino");
            break;
        } else {
            numeroErrores++;
        }
    }
    if (numeroErrores==NUMERO_INTENTOS){
        printf("No eres un adivino");
    }
    

    return 0;
}

int getRandom() {
    int aleatorio;
    srand(time(NULL)); 
    aleatorio = rand() % NUMERO_MAXIMO;
    return aleatorio;
}
