#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stack.h"
#include "item.h"

int main() {
    Stack *pilha = stack_criar();
    int resto;
    int num;
    scanf("%d", &num);

    if (num == 0) {
        printf("0");
    }
    
    while(num > 0) {
        resto = num % 2;
        ITEM *restinho = item_criar(resto);
        stack_push(pilha,restinho);
        num = num/2;
    }

    while(stack_vazia(pilha) == false) {
        ITEM* removido = stack_pop(pilha);
        item_imprimir(removido);
        item_destruir(&removido);

    }
       printf("\n");    

    stack_destruir(&pilha); 
    return 0;



    
}