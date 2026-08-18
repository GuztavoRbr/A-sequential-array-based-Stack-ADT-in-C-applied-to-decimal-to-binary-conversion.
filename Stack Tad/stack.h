#ifndef STACK_H
#define STACK_H
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "item.h"
#define MAX_SIZE 100

typedef struct stack Stack; 

Stack* stack_criar(void);
void   stack_destruir(Stack **s);

bool   stack_push(Stack *s, ITEM *item);
ITEM*  stack_pop(Stack *s);
ITEM*  stack_peek(Stack *s);

bool   stack_vazia(Stack *s);
bool   stack_cheia(Stack *s);
int    stack_tamanho(Stack *s);







#endif