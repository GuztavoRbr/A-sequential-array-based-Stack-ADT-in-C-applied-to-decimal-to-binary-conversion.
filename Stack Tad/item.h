#ifndef ITEM_H
#define ITEM_H
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct item ITEM;
ITEM* item_criar(int valor);
void  item_destruir(ITEM **i);
void  item_imprimir(ITEM *i);
int   item_get_valor(ITEM *i);



#endif