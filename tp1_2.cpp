#include <stdio.h>

int devuelvecuadrado(int num);
void devuelvecuadradovoid(int*num);
void invertir(int*a, int*b);
void ordenar(int*a, int*b);

int main()
{
    int num1;
    int num2;

    printf("Ingrese un numero: ");
    scanf("%d",&num1);

    int cuadrado=devuelvecuadrado(num1);
    devuelvecuadradovoid(&num1);
    printf("El valor ingresado es: %d y su direccion es: %d\nSu cuadrado es: %d\n",cuadrado, &cuadrado, num1 );
    
    printf("Ingrese 2 numeros: \n");
    scanf("%d %d",&num1, &num2);
    invertir(&num1, &num2);
    
        
    printf("Ingrese 2 numeros: \n");
    scanf("%d %d",&num1, &num2);
    ordenar(&num1, &num2);

    return 0;
}

int devuelvecuadrado(int num)
{
    return (num*num);
}

void devuelvecuadradovoid(int *num){
    *num=*num**num;
}

void invertir(int *a, int*b){
    int tmp = *b;
    *b=*a;
    *a=tmp;
//    printf("%d\n%d", *a,*b);
}

void ordenar(int *a, int*b){
    int tmp = *b;
    if (*a<*b)
    {
        invertir(a,b);
    }
    printf("mayor:%d\nmenor:%d", *a,*b);
}