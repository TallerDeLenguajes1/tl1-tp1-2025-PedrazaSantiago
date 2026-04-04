#include <stdio.h>
int cuadrado(int num){
    return num*num;
}
void pCuadrado(int *num){
    *num = (*num)*(*num);
}
void mostrar(int num){
    printf("Contenido de la variable:%d\n",num);
    printf("Direccion de la variable:%p\n",&num);
}
void invertir(int a, int b){
    int temp = a;
    a = b;
    b = temp;
    printf("Invertir:\n");
    printf("Valor a:%d\n",a);
    printf("Valor b:%d\n",b);
}
void orden(int a, int b){
    int temp;
    if(a>b){
        invertir(a,b);
    }
    printf("Orden:\n");
    printf("Valor a:%d\n",a);
    printf("Valor b:%d\n",b);
}
int main(){
    int numero = 2;
    int a=1,b=2;
    printf("Cuadrado del numero por valor:%d\n",cuadrado(numero));
    mostrar(numero);
    pCuadrado(&numero);
    printf("Cuadrado del numero por refencia:%d\n",numero);
    mostrar(numero);
    invertir(a,b);
    orden(a,b);
    return 0;
}

