#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "item.h"



 struct item{
    int valor;
};

ITEM* item_criar(int valor){
    ITEM *i = (ITEM*) malloc (sizeof(ITEM));
    if (i == NULL) {
        printf("ERRO: Memoria insuficiente");
        exit(1);
    }
        i->valor = valor;
        return(i);
    
}
void  item_destruir(ITEM **i) {
    free(*i);
    *i = NULL;
}
void  item_imprimir(ITEM *i) {
    printf("%d", i->valor);
}
int   item_get_valor(ITEM *i) {
    return(i->valor);
}