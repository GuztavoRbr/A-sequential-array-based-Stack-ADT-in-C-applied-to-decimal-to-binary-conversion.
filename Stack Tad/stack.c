#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stack.h"
#include "item.h"



struct stack {
    ITEM *i[MAX_SIZE];
    int topo;
};

Stack* stack_criar(void) {
    Stack *pilha = (Stack *) malloc( sizeof(Stack));
    if (pilha == NULL) {
        printf("ERRO DE MEMORIA");
        exit(1);
    }
     pilha->topo = -1; 
    return(pilha);
}
void stack_destruir (Stack **s) {
    free (*s);
    *s = NULL;

}

bool   stack_push(Stack *s, ITEM *item) {
    if(s == NULL || item == NULL || stack_cheia(s) ) {
        return false;
    }
    s->topo++;
    s->i[s->topo] = item;
    return true;

}
ITEM*  stack_pop(Stack *s) {
    if (s == NULL || stack_vazia(s) == true) {
        return (NULL);
    }
     ITEM *removido = s->i[s->topo];  
    s->i[s->topo] = NULL;         
    s->topo--;    
    return removido;
}
ITEM*  stack_peek(Stack *s);

bool   stack_vazia(Stack *s) {
    if (s->topo == -1 ) {
        return true;
    }
    return false;
}
bool stack_cheia(Stack *s) {
    if (s->topo == MAX_SIZE - 1) {
        return true;
    }
    return false;
}
int    stack_tamanho(Stack *s) {
    return (s->topo+1);
}
