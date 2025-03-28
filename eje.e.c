#include <stdio.h>

int main(){
    int numero = 7;
    int *punt = &numero;
    printf("\nContenido del puntero: %d", *punt);
    printf("\nDireccion de memoria almacenada por el puntero: %d", punt);
    printf("\nDireccion de memoria de la variable: %d", &numero);
    printf("\nDireccion de memoria del puntero: %d", &punt);
    printf("\nTamaño de memoria utilizado por la variable: %zu", sizeof(numero));
    return 0;
}