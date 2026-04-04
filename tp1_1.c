#include <stdio.h>
int main(){
    printf("Hola mundo\n");
    int valor = 10;
    int *p_valor = &valor;
    printf("Contenido del puntero:%d\n",*p_valor);
    printf("Direccion de memoria almacenada por el puntero:%p\n",p_valor);
    printf("Direccion de memoria de la variable:%p\n",&valor);
    printf("Direccion de memoria del puntero:%p\n",&p_valor);
    printf("tamanio de memoria de la variable:%d\n",sizeof(valor));
    return 0;
}