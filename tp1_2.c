#include <stdio.h>
int cuadradoNumero(int num);
void cuadradoNumerito(int num);
void Invertir(int a, int b); //deberá devolver en el valor de a en la variable b, y en el valor de b el valor de a
void orden(int a, int b); //deberá devolver en el valor de a el valor más chico, y en el valor de b el valor más grande

int main(){
    int num = 0;
    int cuadrado = 0;
    int a = 0, b = 0;
    printf("\nIngrese un numero para ver su cuadrado:");
    scanf("%d", &num);
    cuadrado = cuadradoNumero(num);    
    printf("\nCuadrado: %d", cuadrado);
    cuadradoNumerito(num);
    printf("\nDireccion variable recibida: %d", &num);
    printf("\nContenido variable: %d", num);  

    printf("\nIngrese dos numeros");
    printf("\na:");
    scanf("%d", &a);
    printf("\nb:");
    scanf("%d", &b);

    Invertir(a,b);
    orden(a,b);

    return 0;
}

int cuadradoNumero(int num){
    return(num * num);
}

void cuadradoNumerito(int num){
    num = num * num;
    printf("\nCuadrado: %d", num);
}

void Invertir(int a, int b){
    int aux = a;
    a = b;
    b = aux;
    printf("\na: %d", a);
    printf("\nb: %d", b);  
}

void orden(int a, int b){
    if (a > b)
    {
        int aux = a;
        a = b;
        b = aux;
    }
    printf("\nEl valor mas chico: %d", a);
    printf("\nEl  valor mas grande: %d", b);
    
}